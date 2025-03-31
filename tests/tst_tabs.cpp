#include <QtTest>
#include "../../src/tabs/TabManager.h"

class TestTabs : public QObject {
    Q_OBJECT

private slots:
    void testAddTab();
    void testCloseTab();
};

void TestTabs::testAddTab() {
    TabManager tabs;
    tabs.addNewTab("http://example.com");
    QCOMPARE(tabs.count(), 1);
}

void TestTabs::testCloseTab() {
    TabManager tabs;
    tabs.addNewTab("http://example.com");
    tabs.closeTab(0);
    QCOMPARE(tabs.count(), 0);
}

QTEST_MAIN(TestTabs)
#include "tst_tabs.moc"