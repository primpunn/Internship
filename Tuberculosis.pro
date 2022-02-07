QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
include(3rdparty/qextserialport/src/qextserialport.pri)

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    autorun.cpp \
    autorun_msgbox.cpp \
    machine_status.cpp \
    main.cpp \
    main_success.cpp \
    mainwindow.cpp \
    manual.cpp \
    position_setting.cpp \
    run_setting.cpp \
    setting.cpp \
    setting_selectprogram.cpp \
    settingparameter.cpp \
    time_setting.cpp

HEADERS += \
    autorun.h \
    autorun_msgbox.h \
    machine_status.h \
    main_success.h \
    mainwindow.h \
    manual.h \
    position_setting.h \
    run_setting.h \
    setting.h \
    setting_selectprogram.h \
    settingparameter.h \
    tabproxy.h \
    time_setting.h

FORMS += \
    autorun.ui \
    autorun_msgbox.ui \
    main_success.ui \
    mainwindow.ui \
    manual.ui \
    position_setting.ui \
    run_setting.ui \
    setting.ui \
    setting_selectprogram.ui \
    time_setting.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

DISTFILES +=

SUBDIRS += \
    3rdparty/qextserialport/qextserialport.pro \
    3rdparty/qextserialport/qextserialport.pro
