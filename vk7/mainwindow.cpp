#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPushButton>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer = new QTimer(this);
    connect(pQTimer, SIGNAL(timeout()), this, SLOT(timeOut()));
    player1Time=0;
    player2Time=0;
    updateProgressBar();
    setGameInfoText("Select a playtime and press start game", 20);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timeOut() {
    switch(currentPlayer) {
    case 1:
        player1Time--;
        break;
    case 2:
        player2Time--;
        break;
    }
    updateProgressBar();
    if (player1Time==0) {
        pQTimer->stop();
        setGameInfoText("Player 2 won!", 20);
    }
    if (player2Time==0) {
        pQTimer->stop();
        setGameInfoText("Player 1 won!", 20);
    }
}

void MainWindow::setGameInfoText(QString text, short fsize) {
    QFont font = ui->gameStatus->font();
    font.setPointSize(fsize);
    ui->gameStatus->setFont(font);
    ui->gameStatus->setText(text);
}

void MainWindow::updateProgressBar() {
    ui->player1Progress->setValue(player1Time);
    ui->player2Progress->setValue(player2Time);
}

void MainWindow::timeClickedHandler() {
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    if (name=="btn2min") {
        gameTime=120;
    } else if (name=="btn5min") {
        gameTime=300;
    }
    ui->player1Progress->setMaximum(gameTime);
    ui->player2Progress->setMaximum(gameTime);
    updateProgressBar();
    setGameInfoText("Ready to play", 20);
}

void MainWindow::on_btn2min_clicked()
{
    timeClickedHandler();
}

void MainWindow::on_btn5min_clicked()
{
    timeClickedHandler();
}

void MainWindow::on_btnStart_clicked()
{
    currentPlayer=1;
    player1Time=gameTime;
    player2Time=gameTime;
    updateProgressBar();
    pQTimer->start(1000);
    setGameInfoText("Game ongoing", 20);
}


void MainWindow::on_btnStop_clicked()
{
    pQTimer->stop();
    setGameInfoText("New game via start button", 20);
}


void MainWindow::on_player1Button_clicked()
{
    currentPlayer=2;
}

void MainWindow::on_player2Button_clicked()
{

    currentPlayer=1;
}
