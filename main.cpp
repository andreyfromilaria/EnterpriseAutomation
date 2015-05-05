#include "CMainWindow.h"
#include <QApplication>
#include <QLabel>
#include "Include/Ilaria.hxx"

using namespace Ilaria;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    CMainWindow* w = new CMainWindow();

    CEnterprise* enterprise = new CEnterprise();

    QLabel* label = new QLabel(QString::number(enterprise->GetRatioManager()->GetRatioById(ERI_L1)->GetValue()), w);

    label->setGeometry(QRect(50, 50, 100, 100));

    label->show();

    w->show();

    return a.exec();
}
