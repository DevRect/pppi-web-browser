#ifndef SECURITY_MANAGER_H
#define SECURITY_MANAGER_H

#include <QObject>

class CookieManager;

class SecurityManager : public QObject {
    Q_OBJECT

public:
    explicit SecurityManager(QObject* parent = nullptr);
    ~SecurityManager();

    bool isSafeUrl(const QString& url) const;
    void enableIncognitoMode(bool enabled);

private:
    CookieManager* cookieManager;
    bool incognitoMode;
};

#endif // SECURITY_MANAGER_H