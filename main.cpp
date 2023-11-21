#include "conversion.h"

#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    conversion w;
    w.show();
    return a.exec();
}
