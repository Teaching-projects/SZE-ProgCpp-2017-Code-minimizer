#include "minify.h"
#include "ui_minify.h"
#include "clocale"

#include "ReadFile.h"
#include "cssminifyproc.h"

#include <QFileDialog>
#include <QDir>



Minify::Minify(QWidget *parent) : QMainWindow(parent), ui(new Ui::Minify)
{
    ui->setupUi(this);
    //ui->minimalizedCodeTxtBox->setTextColor(QColor(255, 255, 205));
    ui->CommentButton->setCheckable(true);
    ui->WhiteSpaceButton->setCheckable(true);
    ui->VariableButton->setCheckable(true);
    ui->FunctionButton->setCheckable(true);

    if (ui->CSSRadioButton->isChecked())
        type = true;
    else
        type = false;

    cssCommentRemove = new commentRemove();
    // as = new cssMinifyProc();
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
        ui->FunctionButton->setChecked(true);
    }
    else
{
        ui->MinimalizedCodeTxtBox->setText("nem lenyomva");
        ui->FunctionButton->setChecked(false);
    }
}


void Minify::on_AllInOneButton_clicked()
{
    ui->CommentButton->setChecked(true);
    ui->WhiteSpaceButton->setChecked(true);
    ui->VariableButton->setChecked(true);
    Minify::on_FunctionButton_toggled(true);
}

void Minify::on_LoadButton_clicked()
{
    std::setlocale(LC_ALL, "");
    QString filter = "All file (*.*) ;; CSS (*.css) ;; JavaSript (*.js)";
    QString fileName = QFileDialog::getOpenFileName(this, "Megnyitás", "D://", filter);
    /*std::string fileContent = ReadFile::readFile(fileName.toStdString());*/
    QString fileContent = QString::fromStdString(ReadFile::readFile(fileName.toStdString()));
    ui->OriginalCodeTxtBox->setText(fileContent);
}

void Minify::on_CommentButton_toggled(bool checked)
{
    if(checked)
    {
        ui->CommentButton->setChecked(true);
        QString content = ui->OriginalCodeTxtBox->toPlainText();
        std::string content2 = content.toStdString();
        sourceCode* hjk = new sourceCode(content2);
        cssCommentRemove->setOldSource(*hjk);
        cssCommentRemove->minimize();
        ui->MinimalizedCodeTxtBox->setText(QString::fromStdString(cssCommentRemove->getSource().toString()));
    }
    else
    {
        ui->CommentButton->setChecked(false);
    }
}
