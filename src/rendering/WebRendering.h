#ifndef WEB_RENDERER_H
#define WEB_RENDERER_H

#include <QWebEngineView>

class HtmlParser;

/**
 * @class WebRenderer
 * @brief Класс для рендеринга веб-страниц.
 *
 * Использует QWebEngineView для отображения веб-контента и поддерживает
 * загрузку страниц по URL.
 */
class WebRenderer : public QWebEngineView {
    Q_OBJECT

public:
    /**
     * @brief Конструктор класса WebRenderer.
     * @param parent Родительский виджет (по умолчанию nullptr).
     */
    explicit WebRenderer(QWidget* parent = nullptr);

    /// @brief Деструктор класса.
    ~WebRenderer();

    /**
     * @brief Загружает веб-страницу по указанному URL.
     * @param url URL-адрес для загрузки.
     */
    void loadUrl(const QString& url);

private:
    HtmlParser* htmlParser; ///< Указатель на парсер HTML (для кастомной обработки).
};

#endif // WEB_RENDERER_H