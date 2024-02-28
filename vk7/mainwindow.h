#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void timeOut();

private slots:
    void on_btn2min_clicked();
    void on_btn5min_clicked();

    void on_btnStart_clicked();

    void on_btnStop_clicked();

    void on_player1Button_clicked();
    void on_player2Button_clicked();

private:
    short player1Time, player2Time;
    short currentPlayer;
    short gameTime;
    QTimer* pQTimer;

    void timeClickedHandler();
    void updateProgressBar();
    void setGameInfoText(QString, short);
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
