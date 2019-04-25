#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <iostream>
#include <unistd.h>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    static MainWindow & getInstance(){
        static MainWindow instance;
        return instance;}
    void escribir(int segundos);
private slots:
    void on_progressBar_valueChanged(int value);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
