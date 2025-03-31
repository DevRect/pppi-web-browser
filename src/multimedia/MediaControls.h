#ifndef MEDIA_CONTROLS_H
#define MEDIA_CONTROLS_H

#include <QWidget>

class MediaControls : public QWidget {
    Q_OBJECT

public:
    explicit MediaControls(QWidget* parent = nullptr);

signals:
    void playClicked();
    void pauseClicked();
    void stopClicked();
};

#endif // MEDIA_CONTROLS_H