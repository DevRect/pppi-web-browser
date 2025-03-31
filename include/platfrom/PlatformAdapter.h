#ifndef IPLATFORM_ADAPTER_H
#define IPLATFORM_ADAPTER_H

class IPlatformAdapter {
public:
    virtual ~IPlatformAdapter() = default;

    virtual void adaptToPlatform() = 0;
    virtual bool isMobile() const = 0;
};

#endif // IPLATFORM_ADAPTER_H