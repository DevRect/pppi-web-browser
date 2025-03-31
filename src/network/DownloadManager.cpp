#include "DownloadManager.h"

DownloadManager::DownloadManager(QObject* parent) : QObject(parent), isPaused(false) {}

void DownloadManager::startDownload(const QString& url) {
    // Логика загрузки файла
}

void DownloadManager::pauseDownload() {
    isPaused = true;
}

void DownloadManager::resumeDownload() {
    isPaused = false;
}