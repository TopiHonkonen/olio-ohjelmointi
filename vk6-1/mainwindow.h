#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>

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

private slots:
    void on_btnCount_clicked();

    void on_btnReset_clicked();

    void on_edCount_editingFinished();

private:
    Ui::MainWindow *ui;
    int count;
};
#endif // MAINWINDOW_H
