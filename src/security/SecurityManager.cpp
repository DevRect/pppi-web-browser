#include "SecurityManager.h"
#include "CookieManager.h"
#include "../../include/security/SecurityManager.h"

SecurityManager::SecurityManager(QObject* parent) : QObject(parent), cookieManager(new CookieManager(this)), incognitoMode(false) {}

SecurityManager::~SecurityManager() {
    delete cookieManager;
}

bool SecurityManager::isSafeUrl(const QString& url) const {
    return url.startsWith("https://"); // Простая проверка
}

void SecurityManager::enableIncognitoMode(bool enabled) {
    incognitoMode = enabled;
    if (enabled) cookieManager->clearCookies();
}