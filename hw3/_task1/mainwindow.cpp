#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Dialog *d = new Dialog(this);
    d->setAttribute(Qt::WA_DeleteOnClose);

    connect(this, &MainWindow::sendDataToDialog, d, &Dialog::receiveDataFromMain);

    QString textFromMain = ui->le_host->text() + ":" + ui->sB_port->text();
    emit sendDataToDialog(textFromMain);

    d->show();
}

