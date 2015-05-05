#-------------------------------------------------
#
# Project created by QtCreator 2015-05-05T20:46:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EnterpriseAutomation
TEMPLATE = app


SOURCES += main.cpp\
        CMainWindow.cpp \
    Src/BasicExcel.cxx \
    Src/CEnterprise.cxx \
    Src/CModelManager.cxx \
    Src/CPracticeDecoder.cxx \
    Src/CRatioManager.cxx \
    Src/CSubject.cxx \
    Src/ExcelFormat.cxx \
    Src/Models.cxx \
    Src/Ratios.cxx

HEADERS  += CMainWindow.h \
    Include/BasicExcel.hxx \
    Include/CEnterprise.hxx \
    Include/CModelManager.hxx \
    Include/CObserver.hxx \
    Include/CPracticeDecoder.hxx \
    Include/CRatioManager.hxx \
    Include/CSubject.hxx \
    Include/ExcelFormat.hxx \
    Include/Ilaria.hxx \
    Include/IlariaTypes.hxx \
    Include/Models.hxx \
    Include/Ratios.hxx

FORMS    += CMainWindow.ui
