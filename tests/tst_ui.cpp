#include <QtTest>
#include "../../src/ui/BrowserUI.h"
#include "../../src/ui/AddressBar.h"
#include "../../src/ui/ToolBar.h"

class TestUI : public QObject {
    Q_OBJECT

private slots:
    void testAddressBar();
    void testToolBar();
};

void TestUI::testAddressBar() {
    AddressBar addressBar;
    QSignalSpy spy(&addressBar, &AddressBar::urlEntered);
    addressBar.setText("http://example.com");
    addressBar.onReturnPressed();
    QCOMPARE(spy.count(), 1);
    QCOMPARE(spy.takeFirst().at(0).toString(), QString("http://example.com"));
}

void TestUI::testToolBar() {
    ToolBar toolBar;
    QSignalSpy backSpy(&toolBar, &ToolBar::backClicked);
    toolBar.actions()[0]->trigger(); // "Back"
    QCOMPARE(backSpy.count(), 1);
}

QTEST_MAIN(TestUI)
#include "tst_ui.moc"