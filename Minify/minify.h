#ifndef MINIFY_H
#define MINIFY_H

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

private:
    Ui::Minify *ui;
};

#endif // MINIFY_H
