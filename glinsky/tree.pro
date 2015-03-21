TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle qt

SOURCES += main.cpp \
    binarytree.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    util.h \
    binarytree.h

