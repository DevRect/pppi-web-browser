#ifndef NETWORK_MANAGER_H
#define NETWORK_MANAGER_H

#include <QObject>
#include <QNetworkAccessManager>

class DownloadManager;

/**
 * @class NetworkManager
 * @brief Управление сетевыми запросами.
 *
 * Этот класс отвечает за загрузку веб-ресурсов через HTTP/HTTPS и управление
 * сетевыми операциями.
 */
class NetworkManager : public QObject {
    Q_OBJECT

public:
    /**
     * @brief Конструктор класса NetworkManager.
     * @param parent Родительский объект (по умолчанию nullptr).
     */
    explicit NetworkManager(QObject* parent = nullptr);

    /// @brief Деструктор класса.
    ~NetworkManager();

    /**
     * @brief Выполняет запрос к указанному URL.
     * @param url URL-адрес для загрузки.
     */
    void fetchUrl(const QString& url);

signals:
    /**
     * @brief Сигнал, испускаемый при получении содержимого.
     * @param content Загруженное содержимое страницы.
     */
    void contentFetched(const QString& content);

private:
    QNetworkAccessManager* networkAccess; ///< Указатель на менеджер сетевых запросов.
    DownloadManager* downloadManager;     ///< Указатель на менеджер загрузок.
};

#endif // NETWORK_MANAGER_H