QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Service_Support
TEMPLATE = app
CONFIG += c++11 link_pkgconfig
PKGCONFIG += dtkwidget

SOURCES += \
        main.cpp \
    mainwindows.cpp \
    dmenuwidget.cpp \
    selfhelpsupport.cpp \
    introduce.cpp \
    messageinquiry.cpp \
    onlinecustomer.cpp \
    phoneus.cpp

RESOURCES +=         resources.qrc

HEADERS += \
    mainwindows.h \
    dmenuwidget.h \
    selfhelpsupport.h \
    introduce.h \
    messageinquiry.h \
    onlinecustomer.h \
    phoneus.h

