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

private slots:
    void on_readButton_clicked();

    void on_writeButton_clicked();

    void on_func1Btn_clicked();

    void on_func2Btn_clicked();

    void on_func3Btn_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
