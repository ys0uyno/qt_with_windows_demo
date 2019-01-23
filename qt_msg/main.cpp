#include "qt_msg.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qt_msg w;
    w.show();

    return a.exec();
}
