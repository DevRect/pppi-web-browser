#include "ExtensionManager.h"
#include "ExtensionAPI.h"
#include "../../include/extensions/ExtensionManager.h"

ExtensionManager::ExtensionManager(QObject* parent) : QObject(parent) {}

void ExtensionManager::loadExtension(const QString& path) {
    // Загрузка расширения (заглушка)
}

void ExtensionManager::unloadExtension(const QString& id) {
    delete extensions.take(id);
}