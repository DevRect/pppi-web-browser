#include <QtTest>
#include "../../src/multimedia/MediaPlayer.h"

class TestMultimedia : public QObject {
    Q_OBJECT

private slots:
    void testPlay();
};

void TestMultimedia::testPlay() {
    MediaPlayer player;
    player.play("file://test.mp3");
    QVERIFY(player.player->state() == QMediaPlayer::PlayingState);
}

QTEST_MAIN(TestMultimedia)
#include "tst_multimedia.moc"