#include "MediaPlayer.h"
#include "MediaControls.h"
#include "../../include/multimedia/MediaPlayer.h"

MediaPlayer::MediaPlayer(QObject* parent) : QObject(parent), player(new QMediaPlayer(this)), controls(new MediaControls()) {}

MediaPlayer::~MediaPlayer() {
    delete player;
    delete controls;
}

void MediaPlayer::play(const QString& url) {
    player->setMedia(QUrl(url));
    player->play();
}

void MediaPlayer::stop() {
    player->stop();
}