#ifndef TAB_GROUP_H
#define TAB_GROUP_H

#include <QList>

class TabGroup {
public:
    TabGroup();
    void addTab(int tabIndex);
    QList<int> getTabs() const;

private:
    QList<int> tabs;
};

#endif // TAB_GROUP_H