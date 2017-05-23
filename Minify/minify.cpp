#include "minify.h"
#include "ui_minify.h"
#include "clocale"

#include "ReadFile.h"
#include "WriteFile.h"
#include "cssminifyproc.h"

#include <QFileDialog>
//#include <QDir>



Minify::Minify(QWidget *parent) : QMainWindow(parent), ui(new Ui::Minify)
{
    ui->setupUi(this);
    ui->CommentButton->setCheckable(true);
    ui->WhiteSpaceButton->setCheckable(true);
    ui->VariableButton->setCheckable(true);
    ui->FunctionButton->setCheckable(true);

    QString iconPath = QDir::currentPath();
    iconPath +="/icon.png";
    //ui->MinimalizedCodeTxtBox->setText(iconPath);
    if(QFile::exists(iconPath))
        ui->infoButton->setIcon(QIcon(iconPath));
    else
    {
        ui->infoButton->setText("info");
    }



    std::setlocale(LC_ALL, "");

    isJsType = true;
}

Minify::~Minify()
{
    delete ui;
}

void Minify::on_AllInOneButton_clicked()
{
    ui->CommentButton->setChecked(true);
    ui->WhiteSpaceButton->setChecked(true);
    if(isJsType)
    {
        ui->VariableButton->setChecked(true);
        ui->FunctionButton->setChecked(true);
    }
   doMinimize();
}

void Minify::on_LoadButton_clicked()
{
    QString filter = "JavaSript (*.js) ;; CSS (*.css) ;; All file (*.*)";
    QString fileName = QFileDialog::getOpenFileName(this, "Megnyitás", "D://", filter);
    if(!fileName.isEmpty()&& !fileName.isNull())
    {
        QString fileContent = QString::fromStdString(ReadFile::readFile(fileName.toStdString()));
        ui->OriginalCodeTxtBox->setText(fileContent);
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

        ui->CommentButton->setChecked(false);
        ui->WhiteSpaceButton->setChecked(false);
        ui->VariableButton->setChecked(false);
        ui->FunctionButton->setChecked(false);
    }
    else
    {
        ui->OriginalCodeTxtBox->setText("A fájlt nem lehet betölteni vagy üres");
    }
}

void Minify::on_CommentButton_toggled(bool checked)
{
    Minify::readSource();
    if(checked)
    {
        ui->CommentButton->setChecked(true);
    }

    else
    {
        ui->CommentButton->setChecked(false);
    }    
       doMinimize();


}

void Minify::on_WhiteSpaceButton_toggled(bool checked)
{

        if(checked)
        {
            ui->WhiteSpaceButton->setChecked(true);
        }

        else
        {
            ui->WhiteSpaceButton->setChecked(false);
        }

        doMinimize();

}

void Minify::on_VariableButton_toggled(bool checked)
{
    if(checked)
    {
        ui->VariableButton->setChecked(true);
    }

    else
    {
        ui->VariableButton->setChecked(false);
    }

    doMinimize();
}

void Minify::on_FunctionButton_toggled(bool checked)
{
    if(checked)
    {
        ui->FunctionButton->setChecked(true);
    }

    else
    {
        ui->FunctionButton->setChecked(false);
    }

    doMinimize();
}

void Minify::readSource()
{
    std::string content = (ui->OriginalCodeTxtBox->toPlainText()).toStdString();
    source.empty();
    source.append(content);
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

void Minify::doMinimize()
{       
        Minify::readSource();
        if(isJsType)
            jsMinify.resetName();

        if (ui->CommentButton->isChecked())
        {
            commentRemover.setOldSource(source);
            commentRemover.minimize();

            source.empty();
            source.append(commentRemover.getSource().toString());
        }

        if (ui->WhiteSpaceButton->isChecked())
        {
            if(isJsType)
            {
            jsMinify.setOldSource(source);
            jsMinify.minimize();
            }
            else
            {
                cssMinify.setOldSource(source);
                cssMinify.minimize();
            }

            source.empty();
            source.append(isJsType?jsMinify.getSource().toString():cssMinify.getSource().toString());
        }

        if (ui->VariableButton->isChecked())
        {

            jsMinify.setOldSource(source);
            jsMinify.minimizeVariableName();

            source.empty();
            source.append(jsMinify.getSource().toString());
        }


        if (ui->FunctionButton->isChecked())
        {

            jsMinify.setOldSource(source);
            jsMinify.minimizeFunctionName();

            source.empty();
            source.append(jsMinify.getSource().toString());
        }

        ui->MinimalizedCodeTxtBox->setText(QString::fromStdString(source.toString()));
        Minify::setMinimalizedSize();

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

    if(minimalizedSize < originalSize)
    {
        int sizeDifference = originalSize - minimalizedSize;
        double percentDiffernece = 100 - ((double)minimalizedSize / (double)originalSize * (double)100);

        ui->MinimalizedSizeLabel->setText(QString::fromStdString(std::to_string(minimalizedSize)) + " byte");
        ui->DifferencesLable->setText(QString::fromStdString(std::to_string(sizeDifference) + " byte (" +
                                      std::to_string(percentDiffernece) + " %) a megtakarítás"));

    }
}

void Minify::on_SaveButton_clicked()
{
    QString filter = "JavaSript (*.js) ;; CSS (*.css)";
    QString saveFileName;
    if(isJsType)
        saveFileName = QFileDialog::getSaveFileName(this,"Mentés","./untitled.js",tr("JavaSript(*.js )"));
    else
        saveFileName = QFileDialog::getSaveFileName(this,"Mentés","./untitled.css",tr("CSS(*.css )"));
    WriteFile::writeFile(ui->MinimalizedCodeTxtBox->toPlainText().toStdString(), saveFileName.toStdString());
}

void Minify::on_infoButton_clicked()
{
    iw->show();
}
