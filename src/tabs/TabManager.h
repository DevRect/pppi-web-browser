#ifndef TAB_MANAGER_H
#define TAB_MANAGER_H

#include <QTabWidget>

class WebRenderer;
class TabGroup;

class TabManager : public QTabWidget {
    Q_OBJECT

public:
    explicit TabManager(QWidget* parent = nullptr);
    ~TabManager();

    void addNewTab(const QString& url = "about:blank");
    void closeTab(int index);
    void groupTabs(const QList<int>& tabIndices);

private slots:
    void onTabCloseRequested(int index);

private:
    TabGroup* tabGroup;
};

#endif // TAB_MANAGER_H