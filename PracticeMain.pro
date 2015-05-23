#-------------------------------------------------
#
# Project created by QtCreator 2015-05-21T14:08:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PracticeMain
TEMPLATE = app


SOURCES += main.cpp\
        cmainwindow.cpp \
<<<<<<< HEAD
    Src/BasicExcel.cxx \
    Src/CEnterprise.cxx \
    Src/CModelManager.cxx \
    Src/CPracticeDecoder.cxx \
    Src/CRatioManager.cxx \
    Src/CSubject.cxx \
    Src/ExcelFormat.cxx \
    Src/Models.cxx \
    Src/Ratios.cxx \
    Src/CReportManipulator.cxx

HEADERS  += cmainwindow.h \
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
    Include/Ratios.hxx \
    Include/CReportManipulator.hxx
=======
    canimationmanager.cpp

HEADERS  += cmainwindow.h \
    canimationmanager.h
>>>>>>> animation

FORMS    += cmainwindow.ui
