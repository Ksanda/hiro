#include "hiro.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Hiro w;
    w.show();

    return a.exec();
}
