#include "WebRenderer.h"
#include "HtmlParser.h"
#include "../../include/rendering/WebRenderer.h"

WebRenderer::WebRenderer(QWidget* parent) : QWebEngineView(parent), htmlParser(new HtmlParser()) {}

WebRenderer::~WebRenderer() {
    delete htmlParser;
}

void WebRenderer::loadUrl(const QString& url) {
    load(QUrl(url));
}