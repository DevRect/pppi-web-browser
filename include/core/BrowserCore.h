#ifndef IBROWSER_CORE_H
#define IBROWSER_CORE_H

class IBrowserCore {
public:
    virtual ~IBrowserCore() = default;

    virtual void initialize() = 0;
    virtual void start() = 0;
};

#endif // IBROWSER_CORE_H