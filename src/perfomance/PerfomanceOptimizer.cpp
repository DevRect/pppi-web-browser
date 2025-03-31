#include "PerformanceOptimizer.h"
#include "ThreadPool.h"
#include "../../include/performance/PerformanceOptimizer.h"

PerformanceOptimizer::PerformanceOptimizer(QObject* parent) : QObject(parent), threadPool(new ThreadPool(this)) {}

PerformanceOptimizer::~PerformanceOptimizer() {
    delete threadPool;
}

void PerformanceOptimizer::optimizeMemory() {
    // Логика оптимизации
}

void PerformanceOptimizer::scheduleTask(const std::function<void()>& task) {
    threadPool->start([task]() { task(); });
}