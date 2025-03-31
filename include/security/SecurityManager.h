#ifndef ISECURITY_MANAGER_H
#define ISECURITY_MANAGER_H

#include <QString>

class ISecurityManager {
public:
    virtual ~ISecurityManager() = default;

    virtual bool isSafeUrl(const QString& url) const = 0;
    virtual void enableIncognitoMode(bool enabled) = 0;
};

#endif // ISECURITY_MANAGER_H