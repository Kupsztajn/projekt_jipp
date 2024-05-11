#include "Nasz_projekt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    int x = 5;
    int y = 10;
    Nasz_projekt w;
    w.show();
    return a.exec();
}
