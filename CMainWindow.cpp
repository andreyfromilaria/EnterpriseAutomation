#include "cmainwindow.h"
#include "ui_cmainwindow.h"
#include <QLabel>

CMainWindow::CMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CMainWindow)
{
    ui->setupUi(this);
}

CMainWindow::~CMainWindow()
{
    delete ui;
}

void CMainWindow::on_pushButton_clicked()
{
    QLabel* label = new QLabel(this);
    label->setText("СИРЁЗНА ДА???");
    label->setGeometry(QRect(140, 150, 200, 50));
    label->show();
}
