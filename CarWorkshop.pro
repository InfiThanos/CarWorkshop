TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    clientipnuptscreen.cpp \
    partinputscreen.cpp \
    workorderinputscreen.cpp\
    clientlist.cpp \
    partlist.cpp \
    workorderlist.cpp\
    client.cpp \
    part.cpp \
    workorder.cpp \
    income.cpp \
    incomerecord.cpp \
    incomeinputscreen.cpp \
    annualreport.cpp \
    expense.cpp \
    expenseinputcsreen.cpp \
    expenserecord.cpp \
    loginscreen.cpp \
    userinterface.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    client.h \
    part.h \
    workorder.h \
    clientlist.h \
    partlist.h \
    workorderlist.h \
    expense.h \
    expenserecord.h \
    partinputscreen.h \
    expenseinputscreen.h \
    clientinputscreen.h \
    workorderinputscreen.h \
    income.h \
    incomeinputscreen.h \
    incomerecord.h \
    annualreport.h \
    loginscreen.h \
    userinterface.h

