#ifndef COOKIE_MANAGER_H
#define COOKIE_MANAGER_H

#include <QObject>

class CookieManager : public QObject {
    Q_OBJECT

public:
    explicit CookieManager(QObject* parent = nullptr);
    void clearCookies();
    void setCookie(const QString& key, const QString& value);
};

#endif // COOKIE_MANAGER_H