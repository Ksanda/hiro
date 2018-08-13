#include "administrace.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Administrace w;
    w.show();

    return a.exec();
}
