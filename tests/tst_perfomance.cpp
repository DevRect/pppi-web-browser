#include <QtTest>
#include "../../src/performance/PerformanceOptimizer.h"

class TestPerformance : public QObject {
    Q_OBJECT

private slots:
    void testScheduleTask();
};

void TestPerformance::testScheduleTask() {
    PerformanceOptimizer optimizer;
    bool executed = false;
    optimizer.scheduleTask([&executed]() { executed = true; });
    QTRY_VERIFY_WITH_TIMEOUT(executed, 1000);
}

QTEST_MAIN(TestPerformance)
#include "tst_performance.moc"