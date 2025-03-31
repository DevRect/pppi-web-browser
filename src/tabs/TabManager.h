#ifndef TAB_MANAGER_H
#define TAB_MANAGER_H

#include <QTabWidget>

class WebRenderer;
class TabGroup;

/**
 * @class TabManager
 * @brief Управление вкладками браузера.
 *
 * Этот класс отвечает за создание, закрытие и группировку вкладок в браузере.
 */
class TabManager : public QTabWidget {
    Q_OBJECT

public:
    /**
     * @brief Конструктор класса TabManager.
     * @param parent Родительский виджет (по умолчанию nullptr).
     */
    explicit TabManager(QWidget* parent = nullptr);

    /// @brief Деструктор класса.
    ~TabManager();

    /**
     * @brief Добавляет новую вкладку с указанным URL.
     * @param url URL-адрес для новой вкладки (по умолчанию "about:blank").
     */
    void addNewTab(const QString& url = "about:blank");

    /**
     * @brief Закрывает вкладку по указанному индексу.
     * @param index Индекс вкладки для закрытия.
     */
    void closeTab(int index);

    /**
     * @brief Группирует вкладки по указанным индексам.
     * @param tabIndices Список индексов вкладок для группировки.
     */
    void groupTabs(const QList<int>& tabIndices);

private slots:
    /**
     * @brief Обрабатывает запрос на закрытие вкладки.
     * @param index Индекс закрываемой вкладки.
     */
    void onTabCloseRequested(int index);

private:
    TabGroup* tabGroup; ///< Указатель на объект группировки вкладок.
};

#endif // TAB_MANAGER_H