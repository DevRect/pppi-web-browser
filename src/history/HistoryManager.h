#ifndef HISTORY_MANAGER_H
#define HISTORY_MANAGER_H

#include <QObject>
#include <QList>

class BookmarkManager;

class HistoryManager : public QObject {
    Q_OBJECT

public:
    explicit HistoryManager(QObject* parent = nullptr);
    void addEntry(const QString& url);
    QList<QString> searchHistory(const QString& query) const;

private:
    QList<QString> history;
    BookmarkManager* bookmarkManager;
};

#endif // HISTORY_MANAGER_H