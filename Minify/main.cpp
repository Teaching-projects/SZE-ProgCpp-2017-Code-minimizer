#include "minify.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Minify w;
    w.show();

    return a.exec();
}
