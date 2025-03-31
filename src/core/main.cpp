#include "BrowserCore.h"
#include <QApplication>

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    BrowserCore core;
    core.initialize();
    core.start();
    return app.exec();
}