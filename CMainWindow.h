#ifndef CMAINWINDOW_H
#define CMAINWINDOW_H

#include <QMainWindow>

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

private:
    Ui::CMainWindow *ui;
    QString sExcelFileName;
};

#endif // CMAINWINDOW_H
