#-------------------------------------------------
#
# Project first created by QtCreator 2021-02-18T18:46:40
# edited by ljy 2021-10-12
# 此.pro文件用于告诉qmake关于为这个应用程序创建makefile所需要的细节
#-------------------------------------------------

#构建需要使用网络的应用需要对其进行标记
QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Server

#建立一个应用程序（app）的makefile
TEMPLATE = app

#应用程序中所有头文件的列表
HEADERS  += sreverdialog.h

#所有源文件列表
SOURCES += main.cpp\
        sreverdialog.cpp

#应用程序中所有.ui文件（由QT设计器生成）的列表
FORMS    += sreverdialog.ui
