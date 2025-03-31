#include "AddressBar.h"

AddressBar::AddressBar(QWidget* parent) : QLineEdit(parent) {
    connect(this, &QLineEdit::textEdited, this, &AddressBar::onTextEdited);
    connect(this, &QLineEdit::returnPressed, this, &AddressBar::onReturnPressed);
}

void AddressBar::onTextEdited(const QString& text) {
    // Автозаполнение можно добавить позже
}

void AddressBar::onReturnPressed() {
    emit urlEntered(text());
}