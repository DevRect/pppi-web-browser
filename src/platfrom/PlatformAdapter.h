#ifndef PLATFORM_ADAPTER_H
#define PLATFORM_ADAPTER_H

#include <QObject>

class TouchHandler;

class PlatformAdapter : public QObject {
    Q_OBJECT

public:
    explicit PlatformAdapter(QObject* parent = nullptr);
    ~PlatformAdapter();

    void adaptToPlatform();
    bool isMobile() const;

private:
    TouchHandler* touchHandler;
};

#endif // PLATFORM_ADAPTER_H