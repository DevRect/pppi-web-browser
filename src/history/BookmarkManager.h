#ifndef BOOKMARK_MANAGER_H
#define BOOKMARK_MANAGER_H

#include <QObject>
#include <QMap>

class BookmarkManager : public QObject {
    Q_OBJECT

public:
    explicit BookmarkManager(QObject* parent = nullptr);
    void addBookmark(const QString& url, const QString& title);
    QMap<QString, QString> getBookmarks() const;

private:
    QMap<QString, QString> bookmarks; // URL -> Title
};

#endif // BOOKMARK_MANAGER_H