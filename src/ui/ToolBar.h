#ifndef TOOL_BAR_H
#define TOOL_BAR_H

#include <QToolBar>

class ToolBar : public QToolBar {
    Q_OBJECT

public:
    explicit ToolBar(QWidget* parent = nullptr);

signals:
    void backClicked();
    void forwardClicked();
    void refreshClicked();
    void homeClicked();

private:
    QAction* backAction;
    QAction* forwardAction;
    QAction* refreshAction;
    QAction* homeAction;
};

#endif // TOOL_BAR_H