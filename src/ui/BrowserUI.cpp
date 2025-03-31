#include "BrowserUI.h"
#include "AddressBar.h"
#include "ToolBar.h"
#include <QVBoxLayout>
#include "../../include/ui/BrowserUI.h"
#include "../../include/tabs/TabManager.h"

BrowserUI::BrowserUI(QWidget* parent) : QMainWindow(parent), addressBar(nullptr), toolBar(nullptr), tabManager(nullptr) {
    addressBar = new AddressBar(this);
    toolBar = new ToolBar(this);
    setCentralWidget(new QWidget(this));
    
    auto* layout = new QVBoxLayout(centralWidget());
    layout->addWidget(toolBar);
    layout->addWidget(addressBar);

    connect(addressBar, &AddressBar::urlEntered, this, &BrowserUI::onAddressEntered);
}

BrowserUI::~BrowserUI() {}

void BrowserUI::setTabManager(ITabManager* tabMgr) {
    tabManager = dynamic_cast<TabManager*>(tabMgr);
    if (tabManager) {
        auto* layout = centralWidget()->layout();
        layout->addWidget(tabManager);
    }
}

void BrowserUI::show() {
    QMainWindow::show();
}

void BrowserUI::onNewTabRequested() {
    if (tabManager) tabManager->addNewTab();
}

void BrowserUI::onAddressEntered(const QString& url) {
    if (tabManager) tabManager->addNewTab(url);
}