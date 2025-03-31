#ifndef IEXTENSION_MANAGER_H
#define IEXTENSION_MANAGER_H

#include <QString>

class IExtensionManager {
public:
    virtual ~IExtensionManager() = default;

    virtual void loadExtension(const QString& path) = 0;
    virtual void unloadExtension(const QString& id) = 0;
};

#endif // IEXTENSION_MANAGER_H