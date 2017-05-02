#ifndef MINIFY_H
#define MINIFY_H

#include "cssminifyproc.h"
#include "commentremove.h"

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

private:
    Ui::Minify *ui;
    bool type;
    commentRemove * cssCommentRemove;

};

#endif // MINIFY_H
