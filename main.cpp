#include "temperature.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    temperature w;
    w.show();
    return a.exec();
}
