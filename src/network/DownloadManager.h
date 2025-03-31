#ifndef DOWNLOAD_MANAGER_H
#define DOWNLOAD_MANAGER_H

#include <QObject>

class DownloadManager : public QObject {
    Q_OBJECT

public:
    explicit DownloadManager(QObject* parent = nullptr);

    void startDownload(const QString& url);
    void pauseDownload();
    void resumeDownload();

private:
    bool isPaused;
};

#endif // DOWNLOAD_MANAGER_H