#ifndef BROWSER_UI_H
#define BROWSER_UI_H

#include <QMainWindow>
#include <QWidget>

class AddressBar;
class ToolBar;
class TabManager;

class BrowserUI : public QMainWindow {
    Q_OBJECT

public:
    explicit BrowserUI(QWidget* parent = nullptr);
    ~BrowserUI();

    void setTabManager(TabManager* tabManager);

private slots:
    void onNewTabRequested();
    void onAddressEntered(const QString& url);

private:
    AddressBar* addressBar;
    ToolBar* toolBar;
    TabManager* tabManager;
};

#endif // BROWSER_UI_H