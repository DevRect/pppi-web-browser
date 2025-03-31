#ifndef BROWSER_CORE_H
#define BROWSER_CORE_H

#include <QObject>

class BrowserUI;
class WebRenderer;
class TabManager;
class NetworkManager;
class HistoryManager;
class SecurityManager;
class ExtensionManager;
class PerformanceOptimizer;
class MediaPlayer;
class PlatformAdapter;

/**
 * @class BrowserCore
 * @brief Ядро браузера.
 *
 * Этот класс связывает все модули браузера и управляет их инициализацией и запуском.
 */
class BrowserCore : public QObject {
    Q_OBJECT

public:
    /**
     * @brief Конструктор класса BrowserCore.
     * @param parent Родительский объект (по умолчанию nullptr).
     */
    explicit BrowserCore(QObject* parent = nullptr);

    /// @brief Деструктор класса.
    ~BrowserCore();

    /// @brief Инициализирует все модули браузера.
    void initialize();

    /// @brief Запускает браузер.
    void start();

private:
    BrowserUI* ui;                    ///< Указатель на интерфейс.
    WebRenderer* renderer;            ///< Указатель на рендерер.
    TabManager* tabs;                 ///< Указатель на менеджер вкладок.
    NetworkManager* network;          ///< Указатель на сетевой менеджер.
    HistoryManager* history;          ///< Указатель на менеджер истории.
    SecurityManager* security;        ///< Указатель на менеджер безопасности.
    ExtensionManager* extensions;     ///< Указатель на менеджер расширений.
    PerformanceOptimizer* performance; ///< Указатель на оптимизатор производительности.
    MediaPlayer* media;               ///< Указатель на медиаплеер.
    PlatformAdapter* platform;        ///< Указатель на адаптер платформы.
};

#endif // BROWSER_CORE_H