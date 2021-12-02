#-------------------------------------------------
#
# Project created by QtCreator 2021-02-18T18:46:40
# 此.pro文件包含了makefile的一些细节
#-------------------------------------------------

QT       += core gui
#标记网络（开发使用网络的app必须要标记）
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#Makefle的目标
TARGET = Server

#建立一个应用程序的Makefile
TEMPLATE = app

#应用中所有头文件列表
HEADERS  += sreverdialog.h

#应用中所有源文件列表
SOURCES += main.cpp\
        sreverdialog.cpp

#应用程序中的所有.ui文件(由Qt设计器生成)的列表
FORMS    += sreverdialog.ui
