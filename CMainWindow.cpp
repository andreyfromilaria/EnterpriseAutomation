#include "cmainwindow.h"
#include "ui_cmainwindow.h"
#include <QLabel>
#include <canimationmanager.h>
#include <QListWidget>
#include <QFileDialog>
#include <QPropertyAnimation>
#include <QMessageBox>
#include <QCheckBox>
#include <QVector>
#include "Include/Ilaria.hxx"
#include "Writers.hxx"

QPropertyAnimation* wgtReportAnimation;
QVector<QCheckBox*> vCheckBox;

using namespace Ilaria;

CMainWindow::CMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CMainWindow)
{   
    ui->setupUi(this);

    ui->wgtReport->setGeometry(QRect(0,-434,651,434));

    CAnimationManager* animationManager = new CAnimationManager();

    /*
    QPushButton *pcmdNew   = new QPushButton("New");
    QPushButton *pcmdAbout = new QPushButton("About");
    QPushButton *pcmdExit  = new QPushButton("Exit");

    pcmdNew->setParent(this);
    pcmdAbout->setParent(this);
    pcmdExit->setParent(this);

    pcmdNew->show();
    pcmdAbout->show();
    pcmdExit->show();
    */


    ui->pcmdNew->setGeometry(QRect(250,180,151,41));
    ui->pcmdAbout->setGeometry(QRect(250,230,151,41));
    ui->pcmdExit->setGeometry(QRect(250,280,151,41));

    wgtReportAnimation = new QPropertyAnimation(ui->wgtReport,"geometry");

    wgtReportAnimation->setDuration(1000);
    wgtReportAnimation->setEasingCurve(QEasingCurve::Linear);
    wgtReportAnimation->setStartValue(ui->wgtReport->geometry());
    wgtReportAnimation->setEndValue(QRect(0,0,651,434));

    ui->checkDoubleFactor->setGeometry(QRect(10,100,151,17));
    ui->checkAltman->setGeometry(QRect(10,120,141,17));
    ui->checkTuffler->setGeometry(QRect(10,140,171,17));
    ui->checkRCount->setGeometry(QRect(10,160,191,17));
    ui->checkKovalenko->setGeometry(QRect(10,180,171,17));
    ui->checkZayceva->setGeometry(QRect(10,200,141,17));
    //ui->checkFedotova->setGeometry(QRect(10,220,151,17));
    ui->checkRegression->setGeometry((QRect(10,220,151,17)));

    ui->pcmdGenerate->setGeometry(QRect(10,40,151,41));

    /*
     *
    pcmdNew->setGeometry(QRect(-151,150,151,41));
    pcmdAbout->setGeometry(QRect(-151,200,151,41));
    pcmdExit->setGeometry(QRect(-151,250,151,41));


    animationManager->MoveInOutBack(pcmdNew,250,180,1800);
    animationManager->MoveInOutBack(pcmdAbout,250,230,2500);
    animationManager->MoveInOutBack(pcmdExit,250,280,3500);

    */


    vCheckBox << ui->checkDoubleFactor << ui->checkAltman << ui->checkTuffler << ui->checkRCount << ui->checkKovalenko
              << ui->checkZayceva << ui->checkRegression;




}

CMainWindow::~CMainWindow()
{
    delete ui;
}

QString CMainWindow::getCurrentFileName()
{
    return sExcelFileName;
}

void CMainWindow::on_pcmdNew_clicked()
{
    sExcelFileName = QFileDialog::getOpenFileName(0, "Open File", "", "*.xlsx *.xls");

    CPracticeDecoder* d = new CPracticeDecoder();

    if (!sExcelFileName.isEmpty())
    {
        e = d->LoadResourceFromFile(sExcelFileName.toStdString());
        report = new CReport(e);
        wgtReportAnimation->start();
    }
}

void CMainWindow::on_pcmdExit_clicked()
{
    //CTXTWriter wrt;
    //wrt.SaveFile(QString("/Users/andrejstazkin/Documents/paskuda.txt"), report);
    close();
}

void CMainWindow::on_pcmdGenerate_clicked()
{
    /*QMessageBox msgError;
    msgError.setText("Ни одна модель не выбрана");
    bool isChecked = false;

    report->ChangeModelActive(ui->checkAltman->isChecked(), EMI_ALTMAN);
    report->ChangeModelActive(ui->checkDoubleFactor->isChecked(), EMI_TF);
    report->ChangeModelActive(ui->checkRCount->isChecked(), EMI_R);
    report->ChangeModelActive(ui->checkKovalenko->isChecked(), EMI_DA);
    report->ChangeModelActive(ui->checkZayceva->isChecked(), EMI_Z);
    report->ChangeModelActive(ui->checkRegression->isChecked(), EMI_REGRESSION);
    report->ChangeModelActive(ui->checkTuffler->isChecked(), EMI_TAT);

    QVector<QCheckBox*>::iterator it = vCheckBox.begin();

    for(; it != vCheckBox.end(); it++)
    {
        QCheckBox* temp = *it;
        if (temp->isChecked())
        {
            isChecked = true;
        }
    }

    if (!isChecked) msgError.show();*/
}

void CMainWindow::on_pushButton_clicked()
{

}

void CMainWindow::on_pcmdGenerate_released()
{
    QString fileNameBlo = QFileDialog::getSaveFileName(0, "Save File", "", "*.txt");
    CTXTWriter wrt;
    wrt.SaveFile(fileNameBlo, report);
}

void CMainWindow::on_pcmdGenerate_pressed()
{
    //QMessageBox msgError;
    //    msgError.setText("Ни одна модель не выбрана");
    //    bool isChecked = false;

        report->ChangeModelActive(ui->checkAltman->isChecked(), EMI_ALTMAN);
        report->ChangeModelActive(ui->checkDoubleFactor->isChecked(), EMI_TF);
        report->ChangeModelActive(ui->checkRCount->isChecked(), EMI_R);
        report->ChangeModelActive(ui->checkKovalenko->isChecked(), EMI_DA);
        report->ChangeModelActive(ui->checkZayceva->isChecked(), EMI_Z);
        report->ChangeModelActive(ui->checkRegression->isChecked(), EMI_REGRESSION);
        report->ChangeModelActive(ui->checkTuffler->isChecked(), EMI_TAT);

        /*QVector<QCheckBox*>::iterator it = vCheckBox.begin();

        for(; it != vCheckBox.end(); it++)
        {
            QCheckBox* temp = *it;
            if (temp->isChecked())
            {
                isChecked = true;
            }
        }

        if (!isChecked) msgError.show();*/

}
