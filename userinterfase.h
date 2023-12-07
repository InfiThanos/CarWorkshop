#ifndef USERINTERFASE
#define USERINTERFASE

#include "clientlist.h"
#include "clientinputscreen.h"
#include "partlist.h"
#include "partinputscreen.h"
#include "workorderlist.h"
#include "workorderinputscreen.h"
#include "expenserecord.h"
#include "expenseinputscreen.h"
#include "incomerecord.h"
#include "incomeinputscreen.h"
#include "annualreport.h"

class UserInterface                                     //этот класс определяет взаимодействие юзера с программой
{
private:
    WorkOrderList* ptrWorkOrderList;
    WorkOrderInputScreen* ptrWorkOrderInputScreen;
    PartList* ptrPartList;
    PartInputScreen* ptrPartInputScreen;
    ClientList* ptrClientList;
    ClientInputScreen* ptrClientInputScreen;
    IncomeRecord* ptrIncomeRecord;
    IncomeInputScreen* ptrIncomeInputScreen;
    ExpenseRecord* ptrExpenseRecord;
    ExpenseInputScreen* ptrExpenseInputScreen;
    AnnualReport* ptrAnnualReport;
public:
    UserInterface();
    ~UserInterface();
    void interact();
};

#endif // USERINTERFASE

