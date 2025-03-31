#ifndef THREAD_POOL_H
#define THREAD_POOL_H

#include <QThreadPool>

class ThreadPool : public QThreadPool {
    Q_OBJECT

public:
    explicit ThreadPool(QObject* parent = nullptr);
};

#endif // THREAD_POOL_H