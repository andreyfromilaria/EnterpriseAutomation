#include "cmainwindow.h"
#include <QApplication>
#include <QLabel>
#include <QFile>
#include <QByteArray>
#include <Include/Ilaria.hxx>

using namespace Ilaria;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CMainWindow w;

    w.show();

    return a.exec();
}
