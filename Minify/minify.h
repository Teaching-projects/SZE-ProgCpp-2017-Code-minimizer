#ifndef MINIFY_H
#define MINIFY_H

#include "cssminifyproc.h"
#include "commentremove.h"
#include "jsminifyproc.h"

#include <QMainWindow>

namespace Ui {
class Minify;
}

class Minify : public QMainWindow
{
    Q_OBJECT

public:
    explicit Minify(QWidget *parent = 0);
    ~Minify();

private slots:

    void on_FunctionButton_toggled(bool checked);

    void on_AllInOneButton_clicked();

    void on_LoadButton_clicked();

    void on_CommentButton_toggled(bool checked);

    void on_WhiteSpaceButton_toggled(bool checked);

    void on_VariableButton_toggled(bool checked);

    void readSource();

    void on_JavaSriptRadioButton_clicked();

    void on_CSSRadioButton_clicked();

    void on_OriginalCodeTxtBox_textChanged();

    void Minify::setMinimalizedSize();

private:
    Ui::Minify *ui;
    bool isJsType;

    commentRemove * commentRemover;
    jsMinifyProc * whitespaceRemover;

    bool isSourceRead;
    sourceCode* source;
};

#endif // MINIFY_H
