#ifndef EXPENSEINPUTSCREEN
#define EXPENSEINPUTSCREEN

#include "expenserecord.h"

class ExpenseInputScreen                        //Класс для ввода расходов
{
private:
    ExpenseRecord* ptrExpenseRecord;            // запись о расходах
public:
    ExpenseInputScreen(ExpenseRecord* ptrEr);   // конструктор
    void setExpense();                          //добавить данные о расходе
};

#endif // EXPENSEINPUTSCREEN
