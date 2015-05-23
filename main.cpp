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

#ifdef _WIN32
    QFile file("LOL2.txt");
#else
    QFile file("/Users/andrejstazkin/Documents/Answer.txt");
#endif

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
            return 0;

    w.setGeometry(QRect(0, 0, 1024, 768));

    CPracticeDecoder* decoder = new CPracticeDecoder();
#ifdef _WIN32
    CEnterprise* enterprise = decoder->LoadResourceFromFile("/Users/andrejstazkin/Documents/LOL.xls");
#else
    CEnterprise* enterprise = decoder->LoadResourceFromFile("C://LOL.xls");
#endif

    //int x = 200, y = 30, width = 200, h = 30;
    for(int i = 0; i < 15; i++)
    {
        //QLabel* label = new QLabel(&w);
        //label->setText(QString::number(enterprise->GetRatioManager()->GetRatioById(E_RATIO_ID(i))->GetValue()));
        //label->setGeometry(x, y, width, h);
        //y += h;
        //label->show();
        QByteArray arr;
        arr.append(enterprise->GetRatioManager()->GetRatioById(E_RATIO_ID(i))->GetLongRatioName() + " ");
        arr.append(enterprise->GetRatioManager()->GetRatioById(E_RATIO_ID(i))->GetShortRatioName() + " = ");
        arr.append(QString::number(enterprise->GetRatioManager()->GetRatioById(E_RATIO_ID(i))->GetValue()) + "\n");
        file.write(arr);
    }
    file.close();
    w.show();

    return a.exec();
}
