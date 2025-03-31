#ifndef TOUCH_HANDLER_H
#define TOUCH_HANDLER_H

#include <QObject>

class TouchHandler : public QObject {
    Q_OBJECT

public:
    explicit TouchHandler(QObject* parent = nullptr);
    void handleTouchEvent(/* параметры события */);
};

#endif // TOUCH_HANDLER_H