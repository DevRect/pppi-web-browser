#include "BookmarkManager.h"

BookmarkManager::BookmarkManager(QObject* parent) : QObject(parent) {}

void BookmarkManager::addBookmark(const QString& url, const QString& title) {
    bookmarks[url] = title;
}

QMap<QString, QString> BookmarkManager::getBookmarks() const {
    return bookmarks;
}