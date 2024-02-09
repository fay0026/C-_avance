TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        clonable.cpp \
        main.cpp \
        player.cpp \
        thief.cpp \
        warrior.cpp \
        wizard.cpp \
        writable.cpp

HEADERS += \
    clonable.h \
    player.h \
    thief.h \
    warrior.h \
    wizard.h \
    writable.h

DISTFILES += \
    personnages.txt \
    réponses.txt
