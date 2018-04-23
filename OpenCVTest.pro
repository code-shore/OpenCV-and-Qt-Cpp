#-------------------------------------------------
#
# Project created by QtCreator 2018-04-22T19:08:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = opencvtest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

INCLUDEPATH += C:\opencvbuild\install\include


LIBS += C:\opencvbuild\bin\libopencv_core340.dll
LIBS += C:\opencvbuild\bin\libopencv_highgui340.dll
LIBS += C:\opencvbuild\bin\libopencv_imgcodecs340.dll
LIBS += C:\opencvbuild\bin\libopencv_imgproc340.dll
LIBS += C:\opencvbuild\bin\libopencv_features2d340.dll
LIBS += C:\opencvbuild\bin\libopencv_calib3d340.dll
LIBS += C:\opencvbuild\bin\libopencv_videoio340.dll
