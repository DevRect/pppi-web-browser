#ifndef IBROWSER_UI_H
#define IBROWSER_UI_H

#include <QString>

class IBrowserUI {
public:
    virtual ~IBrowserUI() = default;

    virtual void setTabManager(class ITabManager* tabManager) = 0;
    virtual void show() = 0;
};

#endif // IBROWSER_UI_H