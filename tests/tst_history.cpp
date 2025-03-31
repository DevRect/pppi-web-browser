#include <QtTest>
#include "../../src/history/HistoryManager.h"

class TestHistory : public QObject {
    Q_OBJECT

private slots:
    void testAddEntry();
    void testSearch();
};

void TestHistory::testAddEntry() {
    HistoryManager history;
    history.addEntry("http://example.com");
    QCOMPARE(history.searchHistory("example").size(), 1);
}

void TestHistory::testSearch() {
    HistoryManager history;
    history.addEntry("http://example.com");
    history.addEntry("http://test.com");
    QCOMPARE(history.searchHistory("example").size(), 1);
}

QTEST_MAIN(TestHistory)
#include "tst_history.moc"