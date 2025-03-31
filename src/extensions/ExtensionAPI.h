#ifndef EXTENSION_API_H
#define EXTENSION_API_H

#include <QObject>

class ExtensionAPI : public QObject {
    Q_OBJECT

public:
    explicit ExtensionAPI(QObject* parent = nullptr);
    virtual void execute() = 0; // Абстрактный метод для расширений
};

#endif // EXTENSION_API_H