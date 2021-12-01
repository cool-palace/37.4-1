#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void sum();
    void diff();
    void multiply();
    void divide();

private:
    Ui::MainWindow *ui;
    bool correct_first, correct_second;
    qreal a, b;
    void get_numbers();
};
#endif // MAINWINDOW_H
