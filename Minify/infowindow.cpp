#include "infowindow.h"
#include "ui_infowindow.h"

InfoWindow::InfoWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoWindow)
{
    ui->setupUi(this);
    this->setFixedWidth(275);
    this->setFixedHeight(300);
}

InfoWindow::~InfoWindow()
{
    delete ui;
}

void InfoWindow::on_pushButton_clicked()
{
    this->hide();
}
