#ifndef NETWORK_MANAGER_H
#define NETWORK_MANAGER_H

#include <QObject>
#include <QNetworkAccessManager>

class DownloadManager;

class NetworkManager : public QObject {
    Q_OBJECT

public:
    explicit NetworkManager(QObject* parent = nullptr);
    ~NetworkManager();

    void fetchUrl(const QString& url);

signals:
    void contentFetched(const QString& content);

private:
    QNetworkAccessManager* networkAccess;
    DownloadManager* downloadManager;
};

#endif // NETWORK_MANAGER_H