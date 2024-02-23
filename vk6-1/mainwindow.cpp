#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    count=0;
    ui->edCount->setText(QString::number(count));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCount_clicked()
{
    count++;
    ui->edCount->setText(QString::number(count));
}


void MainWindow::on_btnReset_clicked()
{
    count=0;
    ui->edCount->setText(QString::number(count));
}


void MainWindow::on_edCount_editingFinished()
{
    count=ui->edCount->text().toInt();
}

