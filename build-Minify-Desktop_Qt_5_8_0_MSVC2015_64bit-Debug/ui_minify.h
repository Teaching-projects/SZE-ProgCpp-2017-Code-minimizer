/********************************************************************************
** Form generated from reading UI file 'minify.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MINIFY_H
#define UI_MINIFY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Minify
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *TitleLabel;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *TypeVerticalLayout;
    QRadioButton *CSSRadioButton;
    QRadioButton *JavaSriptRadioButton;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *LoadButton;
    QPushButton *AllInOneButton;
    QPushButton *SaveButton;
    QHBoxLayout *buttonHorizontalLayout;
    QPushButton *CommentButton;
    QPushButton *WhiteSpaceButton;
    QPushButton *VariableButton;
    QPushButton *FunctionButton;
    QHBoxLayout *SourcesHorizontalLayout;
    QVBoxLayout *OriginalverticalLayout;
    QLabel *OriginalLable;
    QLabel *OriginalSizeLabel;
    QTextEdit *OriginalCodeTxtBox;
    QVBoxLayout *minimalizedverticalLayout;
    QLabel *MinimalizedLable;
    QLabel *MinimalizedSizeLabel;
    QTextBrowser *MinimalizedCodeTxtBox;
    QLabel *SavingsLabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Minify)
    {
        if (Minify->objectName().isEmpty())
            Minify->setObjectName(QStringLiteral("Minify"));
        Minify->resize(571, 429);
        Minify->setStyleSheet(QLatin1String("background:qlineargradient(spread:reflect, x1:0.553, y1:0.317955, x2:0, y2:0.005, stop:0 rgba(232, 155, 0, 255), stop:1 rgba(0, 0, 0, 255));\n"
""));
        centralWidget = new QWidget(Minify);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        TitleLabel = new QLabel(centralWidget);
        TitleLabel->setObjectName(QStringLiteral("TitleLabel"));
        QFont font;
        font.setFamily(QStringLiteral("magneto"));
        font.setPointSize(27);
        TitleLabel->setFont(font);
        TitleLabel->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"font-family: magneto;"));
        TitleLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(TitleLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        TypeVerticalLayout = new QVBoxLayout();
        TypeVerticalLayout->setSpacing(6);
        TypeVerticalLayout->setObjectName(QStringLiteral("TypeVerticalLayout"));
        CSSRadioButton = new QRadioButton(centralWidget);
        CSSRadioButton->setObjectName(QStringLiteral("CSSRadioButton"));
        CSSRadioButton->setLayoutDirection(Qt::RightToLeft);
        CSSRadioButton->setStyleSheet(QLatin1String("QRadioButton\n"
"{\n"
"background-color: rgb(255, 255, 255, 0);\n"
"color: rgb(0, 0, 0);\n"
"font-family: MS UI Gothic;\n"
"}\n"
"\n"
"QRadioButton:hover\n"
"{\n"
"\n"
"}"));
        CSSRadioButton->setChecked(true);

        TypeVerticalLayout->addWidget(CSSRadioButton);

        JavaSriptRadioButton = new QRadioButton(centralWidget);
        JavaSriptRadioButton->setObjectName(QStringLiteral("JavaSriptRadioButton"));
        JavaSriptRadioButton->setLayoutDirection(Qt::RightToLeft);
        JavaSriptRadioButton->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255, 0);\n"
"color: rgb(0, 0, 0);\n"
"font-family: MS UI Gothic;"));

        TypeVerticalLayout->addWidget(JavaSriptRadioButton);


        horizontalLayout_2->addLayout(TypeVerticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        LoadButton = new QPushButton(centralWidget);
        LoadButton->setObjectName(QStringLiteral("LoadButton"));
        QFont font1;
        font1.setFamily(QStringLiteral("MS UI Gothic"));
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        LoadButton->setFont(font1);
        LoadButton->setStyleSheet(QLatin1String("QPushButton\n"
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

        horizontalLayout->addWidget(LoadButton);

        AllInOneButton = new QPushButton(centralWidget);
        AllInOneButton->setObjectName(QStringLiteral("AllInOneButton"));
        AllInOneButton->setFont(font1);
        AllInOneButton->setStyleSheet(QLatin1String("QPushButton\n"
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

        horizontalLayout->addWidget(AllInOneButton);

        SaveButton = new QPushButton(centralWidget);
        SaveButton->setObjectName(QStringLiteral("SaveButton"));
        SaveButton->setFont(font1);
        SaveButton->setStyleSheet(QLatin1String("QPushButton\n"
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

        horizontalLayout->addWidget(SaveButton);


        verticalLayout->addLayout(horizontalLayout);

        buttonHorizontalLayout = new QHBoxLayout();
        buttonHorizontalLayout->setSpacing(7);
        buttonHorizontalLayout->setObjectName(QStringLiteral("buttonHorizontalLayout"));
        buttonHorizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        buttonHorizontalLayout->setContentsMargins(-1, 0, -1, -1);
        CommentButton = new QPushButton(centralWidget);
        CommentButton->setObjectName(QStringLiteral("CommentButton"));
        CommentButton->setStyleSheet(QLatin1String("QPushButton\n"
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

        buttonHorizontalLayout->addWidget(CommentButton);

        WhiteSpaceButton = new QPushButton(centralWidget);
        WhiteSpaceButton->setObjectName(QStringLiteral("WhiteSpaceButton"));
        WhiteSpaceButton->setStyleSheet(QLatin1String("QPushButton\n"
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

        buttonHorizontalLayout->addWidget(WhiteSpaceButton);

        VariableButton = new QPushButton(centralWidget);
        VariableButton->setObjectName(QStringLiteral("VariableButton"));
        VariableButton->setFont(font1);
        VariableButton->setStyleSheet(QLatin1String("QPushButton\n"
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

        buttonHorizontalLayout->addWidget(VariableButton);

        FunctionButton = new QPushButton(centralWidget);
        FunctionButton->setObjectName(QStringLiteral("FunctionButton"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 205, 0));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        FunctionButton->setPalette(palette);
        FunctionButton->setFont(font1);
        FunctionButton->setStyleSheet(QLatin1String("QPushButton\n"
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

        buttonHorizontalLayout->addWidget(FunctionButton);


        verticalLayout->addLayout(buttonHorizontalLayout);

        SourcesHorizontalLayout = new QHBoxLayout();
        SourcesHorizontalLayout->setSpacing(6);
        SourcesHorizontalLayout->setObjectName(QStringLiteral("SourcesHorizontalLayout"));
        OriginalverticalLayout = new QVBoxLayout();
        OriginalverticalLayout->setSpacing(0);
        OriginalverticalLayout->setObjectName(QStringLiteral("OriginalverticalLayout"));
        OriginalLable = new QLabel(centralWidget);
        OriginalLable->setObjectName(QStringLiteral("OriginalLable"));
        QFont font2;
        font2.setFamily(QStringLiteral("MS UI Gothic"));
        OriginalLable->setFont(font2);
        OriginalLable->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0, 150);\n"
"color: rgb(255, 255, 205);\n"
"font-family: MS UI Gothic;\n"
""));
        OriginalLable->setAlignment(Qt::AlignCenter);

        OriginalverticalLayout->addWidget(OriginalLable);

        OriginalSizeLabel = new QLabel(centralWidget);
        OriginalSizeLabel->setObjectName(QStringLiteral("OriginalSizeLabel"));
        QPalette palette1;
        QBrush brush2(QColor(255, 255, 205, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush3(QColor(0, 0, 0, 150));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        OriginalSizeLabel->setPalette(palette1);
        OriginalSizeLabel->setFont(font2);
        OriginalSizeLabel->setLayoutDirection(Qt::LeftToRight);
        OriginalSizeLabel->setAutoFillBackground(false);
        OriginalSizeLabel->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0, 150);\n"
"color: rgb(255, 255, 205);\n"
"font-family: MS UI Gothic;\n"
""));
        OriginalSizeLabel->setAlignment(Qt::AlignCenter);

        OriginalverticalLayout->addWidget(OriginalSizeLabel);

        OriginalCodeTxtBox = new QTextEdit(centralWidget);
        OriginalCodeTxtBox->setObjectName(QStringLiteral("OriginalCodeTxtBox"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::NoBrush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush3);
        QBrush brush5(QColor(255, 255, 255, 0));
        brush5.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Highlight, brush5);
        QBrush brush6(QColor(0, 255, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::HighlightedText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::NoBrush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Highlight, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        QBrush brush8(QColor(0, 0, 0, 255));
        brush8.setStyle(Qt::NoBrush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Highlight, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush6);
        OriginalCodeTxtBox->setPalette(palette2);
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(10);
        OriginalCodeTxtBox->setFont(font3);
        OriginalCodeTxtBox->setStyleSheet(QLatin1String("color:rgb(255, 255, 205);\n"
"background-color: rgb(0, 0, 0, 150);\n"
"selection-background-color: rgba(255, 255, 255, 0);\n"
"selection-color: rgb(0, 255, 0);"));

        OriginalverticalLayout->addWidget(OriginalCodeTxtBox);


        SourcesHorizontalLayout->addLayout(OriginalverticalLayout);

        minimalizedverticalLayout = new QVBoxLayout();
        minimalizedverticalLayout->setSpacing(0);
        minimalizedverticalLayout->setObjectName(QStringLiteral("minimalizedverticalLayout"));
        MinimalizedLable = new QLabel(centralWidget);
        MinimalizedLable->setObjectName(QStringLiteral("MinimalizedLable"));
        MinimalizedLable->setFont(font2);
        MinimalizedLable->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0, 150);\n"
"color: rgb(255, 255, 205);\n"
"font-family: MS UI Gothic;"));
        MinimalizedLable->setAlignment(Qt::AlignCenter);

        minimalizedverticalLayout->addWidget(MinimalizedLable);

        MinimalizedSizeLabel = new QLabel(centralWidget);
        MinimalizedSizeLabel->setObjectName(QStringLiteral("MinimalizedSizeLabel"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        MinimalizedSizeLabel->setPalette(palette3);
        MinimalizedSizeLabel->setFont(font2);
        MinimalizedSizeLabel->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0, 150);\n"
"color: rgb(255, 255, 205);\n"
"font-family: MS UI Gothic;"));
        MinimalizedSizeLabel->setAlignment(Qt::AlignCenter);

        minimalizedverticalLayout->addWidget(MinimalizedSizeLabel);

        MinimalizedCodeTxtBox = new QTextBrowser(centralWidget);
        MinimalizedCodeTxtBox->setObjectName(QStringLiteral("MinimalizedCodeTxtBox"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        QBrush brush9(QColor(0, 0, 0, 255));
        brush9.setStyle(Qt::NoBrush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Highlight, brush5);
        palette4.setBrush(QPalette::Active, QPalette::HighlightedText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        QBrush brush10(QColor(0, 0, 0, 255));
        brush10.setStyle(Qt::NoBrush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Highlight, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        QBrush brush11(QColor(0, 0, 0, 255));
        brush11.setStyle(Qt::NoBrush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Highlight, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush6);
        MinimalizedCodeTxtBox->setPalette(palette4);
        MinimalizedCodeTxtBox->setFont(font3);
        MinimalizedCodeTxtBox->setStyleSheet(QLatin1String("color: rgb(255,255, 205);\n"
"background-color: rgb(0, 0, 0, 150);\n"
"selection-background-color: rgba(255, 255, 255, 0);\n"
"selection-color: rgb(0, 255, 0);\n"
"\n"
""));

        minimalizedverticalLayout->addWidget(MinimalizedCodeTxtBox);


        SourcesHorizontalLayout->addLayout(minimalizedverticalLayout);


        verticalLayout->addLayout(SourcesHorizontalLayout);

        SavingsLabel = new QLabel(centralWidget);
        SavingsLabel->setObjectName(QStringLiteral("SavingsLabel"));
        SavingsLabel->setFont(font2);
        SavingsLabel->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255, 0);\n"
"color: rgb(255, 255, 205);\n"
"font-family: MS UI Gothic;\n"
""));
        SavingsLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(SavingsLabel);


        verticalLayout_2->addLayout(verticalLayout);

        Minify->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Minify);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 571, 21));
        Minify->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Minify);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Minify->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Minify);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Minify->setStatusBar(statusBar);

        retranslateUi(Minify);

        QMetaObject::connectSlotsByName(Minify);
    } // setupUi

    void retranslateUi(QMainWindow *Minify)
    {
        Minify->setWindowTitle(QApplication::translate("Minify", "Minify", Q_NULLPTR));
        TitleLabel->setText(QApplication::translate("Minify", "Minify", Q_NULLPTR));
        CSSRadioButton->setText(QApplication::translate("Minify", "CSS", Q_NULLPTR));
        JavaSriptRadioButton->setText(QApplication::translate("Minify", "JavaSript", Q_NULLPTR));
        LoadButton->setText(QApplication::translate("Minify", "Bet\303\266lt\303\251s", Q_NULLPTR));
        AllInOneButton->setText(QApplication::translate("Minify", "all in one", Q_NULLPTR));
        SaveButton->setText(QApplication::translate("Minify", "Ment\303\251s", Q_NULLPTR));
        CommentButton->setText(QApplication::translate("Minify", "Komment", Q_NULLPTR));
        WhiteSpaceButton->setText(QApplication::translate("Minify", "Feh\303\251r karakter", Q_NULLPTR));
        VariableButton->setText(QApplication::translate("Minify", "V\303\241ltoz\303\263k", Q_NULLPTR));
        FunctionButton->setText(QApplication::translate("Minify", "F\303\274ggv\303\251ny", Q_NULLPTR));
        OriginalLable->setText(QApplication::translate("Minify", "Eredeti", Q_NULLPTR));
        OriginalSizeLabel->setText(QApplication::translate("Minify", "1234 kbyte", Q_NULLPTR));
        MinimalizedLable->setText(QApplication::translate("Minify", "Minimaliz\303\241lt", Q_NULLPTR));
        MinimalizedSizeLabel->setText(QApplication::translate("Minify", "1234 kbyte", Q_NULLPTR));
        SavingsLabel->setText(QApplication::translate("Minify", "567 kbyet 100% megtakar\303\255t\303\241s", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Minify: public Ui_Minify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINIFY_H
