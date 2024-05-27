#include "pedal_robots_main.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	Pedal_Robots_main w;
    w.show();
    return a.exec();
}
