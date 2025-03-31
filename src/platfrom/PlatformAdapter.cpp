#include "PlatformAdapter.h"
#include "TouchHandler.h"
#include "../../include/platform/PlatformAdapter.h"

PlatformAdapter::PlatformAdapter(QObject* parent) : QObject(parent), touchHandler(new TouchHandler(this)) {}

PlatformAdapter::~PlatformAdapter() {
    delete touchHandler;
}

void PlatformAdapter::adaptToPlatform() {
    // Адаптация к платформе
}

bool PlatformAdapter::isMobile() const {
    return false; // Пока заглушка
}