#include "cmainwindow.h"
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CMainWindow w;

    w.setGeometry(QRect(0, 0, 1024, 768));



    w.show();

    return a.exec();
}
