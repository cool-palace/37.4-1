#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::get_numbers() {
    a = ui->first->text().toDouble(&correct_first);
    b = ui->second->text().toDouble(&correct_second);
}

void MainWindow::sum() {
    get_numbers();
    ui->result->setText(correct_first && correct_second
                        ? QString().setNum(a+b) : "Error");
}

void MainWindow::diff() {
    get_numbers();
    ui->result->setText(correct_first && correct_second
                        ? QString().setNum(a-b) : "Error");
};

void MainWindow::multiply() {
    get_numbers();
    ui->result->setText(correct_first && correct_second
                        ? QString().setNum(a*b) : "Error");
};

void MainWindow::divide() {
    get_numbers();
    ui->result->setText(correct_first && correct_second && b != 0
                        ? QString().setNum(a/b) : "Error");
};
