#include "minify.h"
#include "ui_minify.h"

Minify::Minify(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Minify)
{
    ui->setupUi(this);
    //ui->minimalizedCodeTxtBox->setTextColor(QColor(255, 255, 205));
    ui->CommentButton->setCheckable(true);
    ui->WhiteSpaceButton->setCheckable(true);
    ui->VariableButton->setCheckable(true);
    ui->FunctionButton->setCheckable(true);

    ui->MinimalizedCodeTxtBox->setText("sadsadsadsd\nsadsadsad");


}

Minify::~Minify()
{
    delete ui;
}



void Minify::on_FunctionButton_toggled(bool checked)
{
    if(checked)
    {
        ui->MinimalizedCodeTxtBox->setText("lenyomva");

    }
    else
        ui->MinimalizedCodeTxtBox->setText("nem lenyomva");
}


void Minify::on_AllInOneButton_clicked()
{
    ui->CommentButton->setChecked(true);
    ui->WhiteSpaceButton->setChecked(true);
    ui->VariableButton->setChecked(true);
    ui->FunctionButton->setChecked(true);


}
