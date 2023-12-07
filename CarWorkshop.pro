TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

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
    annualreport.h

