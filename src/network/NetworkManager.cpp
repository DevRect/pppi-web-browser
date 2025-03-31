#include "NetworkManager.h"
#include "DownloadManager.h"
#include <QNetworkReply>
#include "../../include/network/NetworkManager.h"

NetworkManager::NetworkManager(QObject* parent) : QObject(parent), networkAccess(new QNetworkAccessManager(this)), downloadManager(new DownloadManager(this)) {
    connect(networkAccess, &QNetworkAccessManager::finished, this, [this](QNetworkReply* reply) {
        emit contentFetched(reply->readAll());
        reply->deleteLater();
    });
}

NetworkManager::~NetworkManager() {
    delete networkAccess;
    delete downloadManager;
}

void NetworkManager::fetchUrl(const QString& url) {
    networkAccess->get(QNetworkRequest(QUrl(url)));
}