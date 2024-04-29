QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cardprototype.cpp \
    difficultydialog.cpp \
    main.cpp \
    mainwindow.cpp \
    numplayersdialog.cpp \
    player.cpp \
    playernamesdialog.cpp

HEADERS += \
    cardprototype.h \
    difficultydialog.h \
    mainwindow.h \
    numplayersdialog.h \
    player.h \
    playernamesdialog.h

FORMS += \
    difficultydialog.ui \
    mainwindow.ui \
    numplayersdialog.ui \
    playernamesdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=
