#include "minify.h"
#include "ui_minify.h"

Minify::Minify(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Minify)
{
    ui->setupUi(this);
    //ui->minimalizedCodeTxtBox->setTextColor(QColor(255, 255, 205));
    ui->FunctionButton->setCheckable(true);
    ui->FunctionButton->setCheckable(true);
    ui->FunctionButton->setCheckable(true);
    ui->FunctionButton->setCheckable(true);

    ui->minimalizedCodeTxtBox->setText("sadsadsadsd\nsadsadsad");
}

Minify::~Minify()
{
    delete ui;
}



void Minify::on_FunctionButton_toggled(bool checked)
{
    if(checked)
        ui->minimalizedCodeTxtBox->setText("lenyomva");
    else
        ui->minimalizedCodeTxtBox->setText("nem lenyomva");
}

