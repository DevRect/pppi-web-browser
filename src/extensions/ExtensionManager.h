#ifndef EXTENSION_MANAGER_H
#define EXTENSION_MANAGER_H

#include <QObject>
#include <QMap>

class ExtensionAPI;

class ExtensionManager : public QObject {
    Q_OBJECT

public:
    explicit ExtensionManager(QObject* parent = nullptr);
    void loadExtension(const QString& path);
    void unloadExtension(const QString& id);

private:
    QMap<QString, ExtensionAPI*> extensions; // ID -> Extension
};

#endif // EXTENSION_MANAGER_H