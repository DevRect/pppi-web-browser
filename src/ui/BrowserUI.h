#ifndef BROWSER_UI_H
#define BROWSER_UI_H

#include <QMainWindow>
#include <QWidget>

class AddressBar;
class ToolBar;
class TabManager;

/**
 * @class BrowserUI
 * @brief Главный пользовательский интерфейс браузера.
 *
 * Этот класс отвечает за создание и управление основным окном браузера,
 * включая адресную строку, панель инструментов и вкладки.
 */
class BrowserUI : public QMainWindow {
    Q_OBJECT

public:
    /**
     * @brief Конструктор класса BrowserUI.
     * @param parent Родительский виджет (по умолчанию nullptr).
     */
    explicit BrowserUI(QWidget* parent = nullptr);

    /// @brief Деструктор класса.
    ~BrowserUI();

    /**
     * @brief Устанавливает менеджер вкладок для интерфейса.
     * @param tabManager Указатель на объект TabManager.
     */
    void setTabManager(TabManager* tabManager);

private slots:
    /// @brief Обрабатывает запрос на создание новой вкладки.
    void onNewTabRequested();

    /**
     * @brief Обрабатывает ввод URL в адресной строке.
     * @param url Введённый пользователем URL.
     */
    void onAddressEntered(const QString& url);

private:
    AddressBar* addressBar;    ///< Указатель на адресную строку.
    ToolBar* toolBar;          ///< Указатель на панель инструментов.
    TabManager* tabManager;    ///< Указатель на менеджер вкладок.
};

#endif // BROWSER_UI_H