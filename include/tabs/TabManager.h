#ifndef ITAB_MANAGER_H
#define ITAB_MANAGER_H

#include <QString>
#include <QList>

class ITabManager {
public:
    virtual ~ITabManager() = default;

    virtual void addNewTab(const QString& url) = 0;
    virtual void closeTab(int index) = 0;
    virtual void groupTabs(const QList<int>& tabIndices) = 0;
};

#endif // ITAB_MANAGER_H