#ifndef INETWORK_MANAGER_H
#define INETWORK_MANAGER_H

#include <QString>

class INetworkManager {
public:
    virtual ~INetworkManager() = default;

    virtual void fetchUrl(const QString& url) = 0;
};

#endif // INETWORK_MANAGER_H