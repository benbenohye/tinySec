#include "sign_up.h"
#include "ui_sign_up.h"
#include <QDebug>
Sign_up::Sign_up(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sign_up)
{
    ui->setupUi(this);
    this->setupConnections();
}

Sign_up::~Sign_up()
{
    delete ui;
}

void Sign_up::setupConnections()
{
   connect(this->ui->finishButton,SIGNAL(clicked(bool)),this,SLOT(handleFinishButtonClicked()));
}

void Sign_up::handleFinishButtonClicked()
{
    qDebug() <<"sign_in successfully!";

}
