#ifndef IWEB_RENDERER_H
#define IWEB_RENDERER_H

#include <QString>

class IWebRenderer {
public:
    virtual ~IWebRenderer() = default;

    virtual void loadUrl(const QString& url) = 0;
};

#endif // IWEB_RENDERER_H