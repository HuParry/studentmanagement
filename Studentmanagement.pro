QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Studentmanagement
TEMPLATE = app

RC_ICONS = icons.ico

SOURCES += main.cpp\
        dialog.cpp \
    add_student.cpp \
    modify.cpp \
    else.cpp \
    premodify.cpp \
    query.cpp \
    login.cpp

HEADERS  += dialog.h \
    add_student.h \
    modify.h \
    else.h \
    premodify.h \
    query.h \
    login.h \
    ui_dialog.h \
    ui_add_student.h \
    ui_modify.h \
    ui_form.h \
    ui_premodify.h \
    ui_query.h \
    ui_time.h \
    ui_login.h


RESOURCES += \
    background.qrc
