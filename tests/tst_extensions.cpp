#include <QtTest>
#include "../../src/extensions/ExtensionManager.h"

class TestExtensions : public QObject {
    Q_OBJECT

private slots:
    void testLoadExtension();
};

void TestExtensions::testLoadExtension() {
    ExtensionManager extensions;
    extensions.loadExtension("dummy_path");
    // Проверяем загрузку (заглушка)
}

QTEST_MAIN(TestExtensions)
#include "tst_extensions.moc"