#ifndef IMEDIA_PLAYER_H
#define IMEDIA_PLAYER_H

#include <QString>

class IMediaPlayer {
public:
    virtual ~IMediaPlayer() = default;

    virtual void play(const QString& url) = 0;
    virtual void stop() = 0;
};

#endif // IMEDIA_PLAYER_H