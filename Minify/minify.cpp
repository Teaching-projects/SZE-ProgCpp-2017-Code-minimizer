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
    whitespaceRemover = new jsMinifyProc();
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
    else if(ReadFile::getFileExtension(fileName.toStdString()) == ".js")
    {
        ui->JavaSriptRadioButton->setChecked(true);
        Minify::on_JavaSriptRadioButton_clicked();
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
            Minify::on_WhiteSpaceButton_toggled(true);
        if(ui->VariableButton->isChecked())
            Minify::on_VariableButton_toggled(true);
         if(ui->FunctionButton->isChecked())
            Minify::on_FunctionButton_toggled(true);
    }

    else
    {
        //visszatétel
        ui->CommentButton->setChecked(false);

        if(ui->WhiteSpaceButton->isChecked())
            Minify::on_WhiteSpaceButton_toggled(true);
        if(ui->VariableButton->isChecked())
            Minify::on_VariableButton_toggled(true);
         if(ui->FunctionButton->isChecked())
             Minify::on_FunctionButton_toggled(true);

         ui->MinimalizedCodeTxtBox->setText(QString::fromStdString(source->toString()));
    }

    Minify::setMinimalizedSize();
    isSourceRead = false;
}

void Minify::on_WhiteSpaceButton_toggled(bool checked)
{

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

void Minify::on_OriginalCodeTxtBox_textChanged()
{
    QString content = ui->OriginalCodeTxtBox->toPlainText();
    ui->OriginalSizeLabel->setText(QString::fromStdString(std::to_string(content.size())) + " byte");
}

void Minify::setMinimalizedSize()
{
    int originalSize = ui->OriginalCodeTxtBox->toPlainText().size();
    int minimalizedSize = ui->MinimalizedCodeTxtBox->toPlainText().size();

    if(minimalizedSize <= originalSize)
    {
        int sizeDifference = originalSize - minimalizedSize;
        double percentDiffernece = 100 - ((double)minimalizedSize / (double)originalSize * (double)100);

        ui->MinimalizedSizeLabel->setText(QString::fromStdString(std::to_string(minimalizedSize)) + " byte");
        ui->DifferencesLable->setText(QString::fromStdString(std::to_string(sizeDifference) + " byte (" +
                                      std::to_string(percentDiffernece) + " %) a megtakarítás"));

    }
}
