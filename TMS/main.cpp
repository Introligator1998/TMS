#include "TMS.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TMS w;
    w.show();
    return a.exec();
}
