#include <QtTest>
#include "../../src/core/BrowserCore.h"

class TestCore : public QObject {
    Q_OBJECT

private slots:
    void testInitialize();
};

void TestCore::testInitialize() {
    BrowserCore core;
    core.initialize();
    // Проверяем, что UI и TabManager связаны (заглушка)
}

QTEST_MAIN(TestCore)
#include "tst_core.moc"