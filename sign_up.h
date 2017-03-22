#ifndef SIGN_UP_H
#define SIGN_UP_H

#include <QWidget>

namespace Ui {
class Sign_up;
}

class Sign_up : public QWidget
{
    Q_OBJECT

public:
    explicit Sign_up(QWidget *parent = 0);
    ~Sign_up();

public:
    void setupConnections();

public slots:
    void handleFinishButtonClicked();

private:
    Ui::Sign_up *ui;
};

#endif // SIGN_UP_H
