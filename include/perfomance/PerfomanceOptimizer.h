#ifndef IPERFORMANCE_OPTIMIZER_H
#define IPERFORMANCE_OPTIMIZER_H

#include <functional>

class IPerformanceOptimizer {
public:
    virtual ~IPerformanceOptimizer() = default;

    virtual void optimizeMemory() = 0;
    virtual void scheduleTask(const std::function<void()>& task) = 0;
};

#endif // IPERFORMANCE_OPTIMIZER_H