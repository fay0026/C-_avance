TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Day.cpp \
        main.cpp \
        operators.cpp

DISTFILES += \
    reponses.txt

HEADERS += \
    Day.h \
    tests.h
