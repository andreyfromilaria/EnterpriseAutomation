#ifndef CMAINWINDOW_H
#define CMAINWINDOW_H

#include <QMainWindow>
#include "Include/CEnterprise.hxx"
#include "CReport.h"

namespace Ui {
class CMainWindow;
}

class CMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CMainWindow(QWidget *parent = 0);
    QString getCurrentFileName();
    ~CMainWindow();

private slots:


    void on_pcmdNew_clicked();

    void on_pcmdExit_clicked();

    void on_pcmdGenerate_clicked();

    void on_pushButton_clicked();

    void on_pcmdGenerate_released();

    void on_pcmdGenerate_pressed();

private:
    Ui::CMainWindow *ui;
    QString sExcelFileName;
    Ilaria::CEnterprise* e;
    Ilaria::CReport* report;
};

#endif // CMAINWINDOW_H
