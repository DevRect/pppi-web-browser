#ifndef HISTORY_MANAGER_H
#define HISTORY_MANAGER_H

#include <QObject>
#include <QList>

class BookmarkManager;

/**
 * @class HistoryManager
 * @brief Управление историей посещений.
 *
 * Этот класс ведёт хронологию посещённых страниц и предоставляет функции поиска.
 */
class HistoryManager : public QObject {
    Q_OBJECT

public:
    /**
     * @brief Конструктор класса HistoryManager.
     * @param parent Родительский объект (по умолчанию nullptr).
     */
    explicit HistoryManager(QObject* parent = nullptr);

    /**
     * @brief Добавляет запись в историю.
     * @param url URL-адрес посещённой страницы.
     */
    void addEntry(const QString& url);

    /**
     * @brief Выполняет поиск по истории.
     * @param query Строка запроса для поиска.
     * @return Список URL, соответствующих запросу.
     */
    QList<QString> searchHistory(const QString& query) const;

private:
    QList<QString> history;         ///< Список записей истории.
    BookmarkManager* bookmarkManager; ///< Указатель на менеджер закладок.
};

#endif // HISTORY_MANAGER_H