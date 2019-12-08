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

void MainWindow::addLabel(QPushButton *button, QLabel *label) {
    QString all_numbers; // переменная для записи всех чисел в строку

    if (label->text() == "0")
        label->setText(button->text());
    else {
        all_numbers = (ui->display->text() + button->text());
        label->setText(all_numbers);
    }
}

void MainWindow::on_pushButton_1_clicked()
{
    addLabel(ui->pushButton_1, ui->display);
}

void MainWindow::on_pushButton_2_clicked()
{
    addLabel(ui->pushButton_2, ui->display);
}

void MainWindow::on_pushButton_3_clicked()
{
    addLabel(ui->pushButton_3, ui->display);
}

void MainWindow::on_pushButton_4_clicked()
{
    addLabel(ui->pushButton_4, ui->display);
}

void MainWindow::on_pushButton_5_clicked()
{
    addLabel(ui->pushButton_5, ui->display);
}

void MainWindow::on_pushButton_6_clicked()
{
    addLabel(ui->pushButton_6, ui->display);
}

void MainWindow::on_pushButton_7_clicked()
{
    addLabel(ui->pushButton_7, ui->display);
}

void MainWindow::on_pushButton_8_clicked()
{
    addLabel(ui->pushButton_8, ui->display);
}

void MainWindow::on_pushButton_9_clicked()
{
    addLabel(ui->pushButton_9, ui->display);
}

void MainWindow::on_pushButton_0_clicked()
{
    addLabel(ui->pushButton_0, ui->display);
}

void MainWindow::on_CE_clicked()
{
    if (num.getValue() != 0)
        num.setValue(0);
    ui->display->setText("0");
}

void MainWindow::on_erase_clicked()
{
    QString str;
    str = ui->display->text();
    unsigned size = str.size();
    str.resize(size-1);
    if (str == "") str = "0";
    ui->display->setText(str);
}

void MainWindow::on_pushButton_dot_clicked()
{
    // если в строке нет символа точки, то добавляем его
    if (!(ui->display->text().contains('.'))) {
        ui->display->setText(ui->display->text() + ".");
    }
}

void MainWindow::on_pushButton_sign_clicked()
{
   double res = ui->display->text().toDouble() * (-1.0);
   ui->display->setText(QString::number(res));
}
