#include <QtTest>
#include "../../src/rendering/WebRenderer.h"

class TestRendering : public QObject {
    Q_OBJECT

private slots:
    void testLoadUrl();
};

void TestRendering::testLoadUrl() {
    WebRenderer renderer;
    renderer.loadUrl("http://example.com");
    QVERIFY(renderer.url().toString().contains("example.com"));
}

QTEST_MAIN(TestRendering)
#include "tst_rendering.moc"