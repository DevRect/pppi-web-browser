#include <QtTest>
#include "../../src/platform/PlatformAdapter.h"

class TestPlatform : public QObject {
    Q_OBJECT

private slots:
    void testIsMobile();
};

void TestPlatform::testIsMobile() {
    PlatformAdapter adapter;
    QVERIFY(!adapter.isMobile()); // Пока заглушка
}

QTEST_MAIN(TestPlatform)
#include "tst_platform.moc"