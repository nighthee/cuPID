#-------------------------------------------------
#
# Project created by QtCreator 2015-10-28T11:40:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = cuPID
TEMPLATE = app


SOURCES += main.cpp\
        loginwindow.cpp \
    registerwindow.cpp \
    mainwindow.cpp \
    admin.cpp \
    user.cpp \
    team.cpp \
    student.cpp \
    project.cpp \
    profile.cpp

HEADERS  += loginwindow.h \
    registerwindow.h \
    mainwindow.h \
    admin.h \
    user.h \
    team.h \
    student.h \
    project.h \
    profile.h

FORMS    += loginwindow.ui \
    registerwindow.ui \
    mainwindow.ui
