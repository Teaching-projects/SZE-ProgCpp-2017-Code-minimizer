/********************************************************************************
** Form generated from reading UI file 'infowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOWINDOW_H
#define UI_INFOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InfoWindow
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *InfoWindow)
    {
        if (InfoWindow->objectName().isEmpty())
            InfoWindow->setObjectName(QStringLiteral("InfoWindow"));
        InfoWindow->resize(260, 300);
        InfoWindow->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:reflect, x1:0.428, y1:0.422, x2:1, y2:1, stop:0 rgba(232, 155, 0, 255), stop:1 rgba(0, 0, 0, 255));\n"
"\n"
""));
        verticalLayout = new QVBoxLayout(InfoWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textBrowser = new QTextBrowser(InfoWindow);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setStyleSheet(QLatin1String("color:rgb(255, 255, 205);\n"
"background-color: rgb(0, 0, 0, 150);\n"
"selection-background-color: rgba(255, 255, 255, 0);\n"
"selection-color: rgb(0, 255, 0);"));

        verticalLayout->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(InfoWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 205, 0);\n"
"border-style: outset;\n"
"border-width: 1px;\n"
"border-radius: 5px;\n"
"border-color: black;\n"
"font: bold 14px;\n"
"min-width: 5em;\n"
"padding: 1px;\n"
"font-family: MS UI Gothic;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    background-color: qradialgradient(spread:reflect, cx:0.5, cy:0.5, radius:0.65, fx:0.5, fy:0.5, stop:0.446328 rgba(232, 155, 0, 255), stop:0.717514 rgba(0, 0, 0, 195));\n"
"   color: rgb(255,255,255);\n"
"    border-style: inset;\n"
"}\n"
"\n"
"QPushButton:checked\n"
"{\n"
"	color: rgb(255, 255, 205);\n"
"    background-color: rgb(0, 0, 0, 150);\n"
"    border-style: inset;\n"
"border-color: rgb(255, 255, 205);\n"
"}"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(InfoWindow);

        QMetaObject::connectSlotsByName(InfoWindow);
    } // setupUi

    void retranslateUi(QDialog *InfoWindow)
    {
        InfoWindow->setWindowTitle(QApplication::translate("InfoWindow", "Dialog", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("InfoWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Minify</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">JavaSript \303\251s CSS forr\303\241sk\303\263d minimaliz\303\241l\303\263. Feh\303\251r karakterek, kommentek, v\303\241ltoz\303\263- \303\251s f\303\274ggv\303\251nynevek r\303\266vid\303\255t\303\251s\303\251re alkalmas szoftver.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p st"
                        "yle=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">k\303\251sz\303\255tette: 	Bauxit8</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	Stigori</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	Chymera</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">verzi\303\263: 1.0</p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("InfoWindow", "Bez\303\241r\303\241s", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class InfoWindow: public Ui_InfoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOWINDOW_H
