#include "ToolBar.h"

ToolBar::ToolBar(QWidget* parent) : QToolBar(parent) {
    backAction = addAction("Back");
    forwardAction = addAction("Forward");
    refreshAction = addAction("Refresh");
    homeAction = addAction("Home");

    connect(backAction, &QAction::triggered, this, &ToolBar::backClicked);
    connect(forwardAction, &QAction::triggered, this, &ToolBar::forwardClicked);
    connect(refreshAction, &QAction::triggered, this, &ToolBar::refreshClicked);
    connect(homeAction, &QAction::triggered, this, &ToolBar::homeClicked);
}