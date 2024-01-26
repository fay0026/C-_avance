TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
        player.cpp \
        thief.cpp \
        warrior.cpp \
        wizard.cpp

HEADERS += \
    player.h \
    thief.h \
    warrior.h \
    wizard.h

DISTFILES += \
    réponses
