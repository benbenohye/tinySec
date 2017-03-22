#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public:
    void setupConnections();

public slots:
    void handleSign_inButtonClicked();
    void handleSign_upButtonClicked();

    void handlesLoginButtonClicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
