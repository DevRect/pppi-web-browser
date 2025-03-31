#ifndef IHISTORY_MANAGER_H
#define IHISTORY_MANAGER_H

#include <QString>
#include <QList>

class IHistoryManager {
public:
    virtual ~IHistoryManager() = default;

    virtual void addEntry(const QString& url) = 0;
    virtual QList<QString> searchHistory(const QString& query) const = 0;
};

#endif // IHISTORY_MANAGER_H