#include <clocale>
#include <string>
#include <iostream>


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ReadFile.h"
#include "WriteFile.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->func1Btn->setCheckable(true);
    ui->func2Btn->setCheckable(true);
    ui->func3Btn->setCheckable(true);
    //std::setlocale(LC_ALL, "");
    //std::string as = "áéáéáéáőőéőáéő";
    //QString asd = QString::fromStdString(as);
    //ui->sourceTxt->setText(asd);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_readButton_clicked()
{
    QString path = ui->inputLine->text();
    //std::string fileContent = ReadFile::readFile(path.toStdString());
    //QString source = QString::fromStdString(fileContent);
    QString source = QString::fromStdString(ReadFile::readFile(path.toStdString()));
    ui->sourceTxt->setText(source);
    ui->minimtxt->setText(source);
}

void MainWindow::on_writeButton_clicked()
{
    QString path = ui->outputLine->text();
    //QString source = ui->miniTxt->toPlainText();
    QString source = ui->minimtxt->toPlainText();
    WriteFile::writeFile(source.toStdString(), path.toStdString());
}

void MainWindow::on_func1Btn_clicked()
{
    //if(ui->func1Btn->pressed())
        //ui->sourceTxt->setText("lennyomva");
}

void MainWindow::on_func2Btn_clicked()
{

}

void MainWindow::on_func3Btn_clicked()
{

}
