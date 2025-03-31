#include "BrowserCore.h"
#include "../ui/BrowserUI.h"
#include "../rendering/WebRenderer.h"
#include "../tabs/TabManager.h"
#include "../network/NetworkManager.h"
#include "../history/HistoryManager.h"
#include "../security/SecurityManager.h"
#include "../extensions/ExtensionManager.h"
#include "../performance/PerformanceOptimizer.h"
#include "../multimedia/MediaPlayer.h"
#include "../platform/PlatformAdapter.h"
#include "../../include/core/BrowserCore.h"

BrowserCore::BrowserCore(QObject* parent) : QObject(parent),
    ui(new BrowserUI()), renderer(new WebRenderer()), tabs(new TabManager()),
    network(new NetworkManager()), history(new HistoryManager()),
    security(new SecurityManager()), extensions(new ExtensionManager()),
    performance(new PerformanceOptimizer()), media(new MediaPlayer()),
    platform(new PlatformAdapter()) {}

BrowserCore::~BrowserCore() {
    delete ui;
    delete renderer;
    delete tabs;
    delete network;
    delete history;
    delete security;
    delete extensions;
    delete performance;
    delete media;
    delete platform;
}

void BrowserCore::initialize() {
    ui->setTabManager(tabs);
}

void BrowserCore::start() {
    ui->show();
}