TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    port.cpp \
    vintageport.cpp

HEADERS += \
    port.h \
    vintageport.h
