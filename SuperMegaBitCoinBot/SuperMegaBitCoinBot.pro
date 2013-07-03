#-------------------------------------------------
#
# Project created by QtCreator 2013-07-02T20:05:26
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SuperMegaBitCoinBot
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    botcore.cpp \
    webinterface.cpp

HEADERS  += mainwindow.h \
    botcore.h \
    webinterface.h

FORMS    += mainwindow.ui

QT += webkit
QT += webkit webkitwidgets
