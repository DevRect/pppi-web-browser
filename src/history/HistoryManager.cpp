#include "HistoryManager.h"
#include "BookmarkManager.h"
#include "../../include/history/HistoryManager.h"

HistoryManager::HistoryManager(QObject* parent) : QObject(parent), bookmarkManager(new BookmarkManager(this)) {}

void HistoryManager::addEntry(const QString& url) {
    history.append(url);
}

QList<QString> HistoryManager::searchHistory(const QString& query) const {
    return history.filter(query);
}