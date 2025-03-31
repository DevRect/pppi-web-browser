#ifndef MEDIA_PLAYER_H
#define MEDIA_PLAYER_H

#include <QMediaPlayer>
#include <QObject>

class MediaControls;

class MediaPlayer : public QObject {
    Q_OBJECT

public:
    explicit MediaPlayer(QObject* parent = nullptr);
    ~MediaPlayer();

    void play(const QString& url);
    void stop();

private:
    QMediaPlayer* player;
    MediaControls* controls;
};

#endif // MEDIA_PLAYER_H