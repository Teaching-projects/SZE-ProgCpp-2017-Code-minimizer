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

    isJsType = true;
    source = new sourceCode();
    isSourceRead = false;

    commentRemover = new commentRemove();
    // as = new cssMinifyProc();
}

Minify::~Minify()
{
    delete ui;
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
    QString filter = "JavaSript (*.js) ;; CSS (*.css) ;; All file (*.*)";
    QString fileName = QFileDialog::getOpenFileName(this, "Megnyitás", "D://", filter);
    /*std::string fileContent = ReadFile::readFile(fileName.toStdString());*/
    QString fileContent = QString::fromStdString(ReadFile::readFile(fileName.toStdString()));



    if(ReadFile::getFileExtension(fileName.toStdString()) == ".css")
    {
        ui->CSSRadioButton->setChecked(true);
        Minify::on_CSSRadioButton_clicked();
    }

    ui->OriginalCodeTxtBox->setText(fileContent);
}

//Komment eltávolítás
void Minify::on_CommentButton_toggled(bool checked)
{
    //eredeti forráskód kiolvasása ha még nem volt
    if(!isSourceRead)
    {
     /*isSourceRead = true;
     std::string content = (ui->OriginalCodeTxtBox->toPlainText()).toStdString();
     source->empty();
     source->append(content);*/
     Minify::readSource();

    }

    //komment kiszedése
    if(checked)
    {
        ui->CommentButton->setChecked(true);     
        commentRemover->setOldSource(*source);
        commentRemover->minimize();
        ui->MinimalizedCodeTxtBox->setText(QString::fromStdString(commentRemover->getSource().toString()));

        if(ui->WhiteSpaceButton->isChecked())
            on_WhiteSpaceButton_toggled(true);
        if(ui->VariableButton->isChecked())
            on_VariableButton_toggled(true);
         if(ui->FunctionButton->isChecked())
             on_FunctionButton_toggled(true);
    }

    else
    {
        //visszatétel
        ui->CommentButton->setChecked(false);

        if(ui->WhiteSpaceButton->isChecked())
            on_WhiteSpaceButton_toggled(true);
        if(ui->VariableButton->isChecked())
            on_VariableButton_toggled(true);
         if(ui->FunctionButton->isChecked())
             on_FunctionButton_toggled(true);

         ui->MinimalizedCodeTxtBox->setText(QString::fromStdString(source->toString()));

    }
    isSourceRead = false;
}

void Minify::on_WhiteSpaceButton_toggled(bool checked)
{
    //eredeti forráskód kiolvasása ha még nem volt
    if(!isSourceRead)
    {
     Minify::readSource();
    }

    if(checked)
    {
        if(isJsType)
        {

        }
        else
        {

        }
    }

    else
    {

    }

    isSourceRead = false;
}

void Minify::on_VariableButton_toggled(bool checked)
{
    if(!isSourceRead)
    {
      Minify::readSource();
    }


    isSourceRead = false;
}

void Minify::on_FunctionButton_toggled(bool checked)
{
    if(!isSourceRead)
    {
        Minify::readSource();
    }

    if(checked)
    {
        ui->MinimalizedCodeTxtBox->setText("lenoymva");
        ui->FunctionButton->setChecked(true);
    }
    else
    {
        ui->MinimalizedCodeTxtBox->setText("nem lenyomva");
        ui->FunctionButton->setChecked(false);
    }

    isSourceRead = false;
}

void Minify::readSource()
{
    isSourceRead = true;
    std::string content = (ui->OriginalCodeTxtBox->toPlainText()).toStdString();
    source->empty();
    source->append(content);
}

void Minify::on_JavaSriptRadioButton_clicked()
{
    isJsType = true;
    ui->VariableButton->setEnabled(true);
    ui->FunctionButton->setEnabled(true);
}

void Minify::on_CSSRadioButton_clicked()
{
    isJsType = false;
    ui->VariableButton->setEnabled(false);
    ui->FunctionButton->setEnabled(false);
}
