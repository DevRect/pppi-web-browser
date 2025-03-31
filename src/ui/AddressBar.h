#ifndef ADDRESS_BAR_H
#define ADDRESS_BAR_H

#include <QLineEdit>

class AddressBar : public QLineEdit {
    Q_OBJECT

public:
    explicit AddressBar(QWidget* parent = nullptr);

signals:
    void urlEntered(const QString& url);

private slots:
    void onTextEdited(const QString& text);
    void onReturnPressed();
};

#endif // ADDRESS_BAR_H