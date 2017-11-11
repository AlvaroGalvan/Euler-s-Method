#include "meuler.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MEuler w;
    w.show();

    return a.exec();
}
