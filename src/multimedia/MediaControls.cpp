#include "MediaControls.h"
#include <QPushButton>
#include <QHBoxLayout>

MediaControls::MediaControls(QWidget* parent) : QWidget(parent) {
    auto* playButton = new QPushButton("Play", this);
    auto* pauseButton = new QPushButton("Pause", this);
    auto* stopButton = new QPushButton("Stop", this);

    auto* layout = new QHBoxLayout(this);
    layout->addWidget(playButton);
    layout->addWidget(pauseButton);
    layout->addWidget(stopButton);

    connect(playButton, &QPushButton::clicked, this, &MediaControls::playClicked);
    connect(pauseButton, &QPushButton::clicked, this, &MediaControls::pauseClicked);
    connect(stopButton, &QPushButton::clicked, this, &MediaControls::stopClicked);
}