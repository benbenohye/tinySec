#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <sign_up.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setupConnections();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupConnections()
{
    connect(this->ui->sign_inButton,SIGNAL(clicked(bool)),this,SLOT(handleSign_inButtonClicked()));
    connect(this->ui->sign_upButton,SIGNAL(clicked(bool)),this,SLOT(handleSign_upButtonClicked()));
}

void MainWindow::handleSign_inButtonClicked()
{
    qDebug() <<"zhuan dao denglu";
}

 void MainWindow::handleSign_upButtonClicked()
 {
     qDebug() <<"zhuan dao zhuce";
     Sign_up s;
     s.show();
}
