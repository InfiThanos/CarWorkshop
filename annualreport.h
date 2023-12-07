#ifndef ANNUALREPORT
#define ANNUALREPORT

#include "incomerecord.h"
#include "expenserecord.h"

using namespace std;

class AnnualReport                                  //Класс годового отчета
{
private:
    IncomeRecord* ptrIR;                            // записи доходов
    ExpenseRecord* ptrER;                           // записи расходов
public:
    AnnualReport(IncomeRecord* ptrIR, ExpenseRecord* ptrER);    //конструктор
    void display();                                             // отображение годового отчета
};

#endif // ANNUALREPORT


