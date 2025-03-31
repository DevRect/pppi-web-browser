#ifndef WEB_RENDERER_H
#define WEB_RENDERER_H

#include <QWebEngineView>

class HtmlParser;

class WebRenderer : public QWebEngineView {
    Q_OBJECT

public:
    explicit WebRenderer(QWidget* parent = nullptr);
    ~WebRenderer();

    void loadUrl(const QString& url);

private:
    HtmlParser* htmlParser; // Для парсинга, если требуется кастомная обработка
};

#endif // WEB_RENDERER_H