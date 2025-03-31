#ifndef PERFORMANCE_OPTIMIZER_H
#define PERFORMANCE_OPTIMIZER_H

#include <QObject>

class ThreadPool;

class PerformanceOptimizer : public QObject {
    Q_OBJECT

public:
    explicit PerformanceOptimizer(QObject* parent = nullptr);
    ~PerformanceOptimizer();

    void optimizeMemory();
    void scheduleTask(const std::function<void()>& task);

private:
    ThreadPool* threadPool;
};

#endif // PERFORMANCE_OPTIMIZER_H