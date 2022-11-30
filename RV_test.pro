#-------------------------------------------------
# Cours de Réalité Virtuelle
# leo.donati@univ-cotedazur.fr
#
# PNS 2022-23
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
greaterThan(QT_MAJOR_VERSION, 5): QT += openglwidgets

CONFIG += c++11

TARGET = RV_test
TEMPLATE = app

SOURCES += main.cpp\
    widgetopengl.cpp

HEADERS  += widgetopengl.h

windows:LIBS += -lopengl32

