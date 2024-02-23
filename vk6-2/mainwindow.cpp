#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPushButton>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    state=1;
    operand=0;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickedHandler() {
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    for (int i=0;i<=9;i++) {
        if (name=="N"+QString::number(i)) {
            switch (state) {
            case 1:
                number1+=QString::number(i);
                ui->num1->setText(number1);
                break;
            case 2:
                number2+=QString::number(i);
                ui->num2->setText(number2);
                break;
            }
            break;
        }
    }
    if (name=="add") {
        operand=0;
    } else if (name=="sub") {
        operand=1;
    } else if (name=="mul") {
        operand=2;
    } else if (name=="div") {
        operand=3;
    } else if (name=="enter") {
        if (state==1) {
            state=2;
        } else {
            int result;
            switch (operand) {
            case 0:
                result=number1.toInt()+number2.toInt();
                break;
            case 1:
                result=number1.toInt()-number2.toInt();
                break;
            case 2:
                result=number1.toInt()*number2.toInt();
                break;
            case 3:
                result=number1.toInt()/number2.toInt();
                break;
            }
            ui->result->setText(QString::number(result));
        }
    } else if (name=="clear") {
        state=1;
        number1="";
        number2="";
        ui->num1->setText("");
        ui->num2->setText("");
        ui->result->setText("");

    }
}

void MainWindow::on_N0_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_N1_clicked()
{
    numberClickedHandler();
}
void MainWindow::on_N2_clicked()
{
    numberClickedHandler();
}
void MainWindow::on_N3_clicked()
{
    numberClickedHandler();
}
void MainWindow::on_N4_clicked()
{
    numberClickedHandler();
}
void MainWindow::on_N5_clicked()
{
    numberClickedHandler();
}
void MainWindow::on_N6_clicked()
{
    numberClickedHandler();
}
void MainWindow::on_N7_clicked()
{
    numberClickedHandler();
}
void MainWindow::on_N8_clicked()
{
    numberClickedHandler();
}
void MainWindow::on_N9_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_add_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_sub_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_mul_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_div_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_enter_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_clear_clicked()
{
    numberClickedHandler();
}
