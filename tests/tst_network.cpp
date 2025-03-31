#include <QtTest>
#include "../../src/network/NetworkManager.h"

class TestNetwork : public QObject {
    Q_OBJECT

private slots:
    void testFetchUrl();
};

void TestNetwork::testFetchUrl() {
    NetworkManager network;
    QSignalSpy spy(&network, &NetworkManager::contentFetched);
    network.fetchUrl("http://example.com");
    QTRY_COMPARE_WITH_TIMEOUT(spy.count(), 1, 10000); // Ожидаем ответа сети
}

QTEST_MAIN(TestNetwork)
#include "tst_network.moc"