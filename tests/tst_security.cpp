#include <QtTest>
#include "../../src/security/SecurityManager.h"

class TestSecurity : public QObject {
    Q_OBJECT

private slots:
    void testSafeUrl();
    void testIncognitoMode();
};

void TestSecurity::testSafeUrl() {
    SecurityManager security;
    QVERIFY(security.isSafeUrl("https://example.com"));
    QVERIFY(!security.isSafeUrl("http://example.com"));
}

void TestSecurity::testIncognitoMode() {
    SecurityManager security;
    security.enableIncognitoMode(true);
    // Проверяем, что куки очищены (заглушка)
}

QTEST_MAIN(TestSecurity)
#include "tst_security.moc"