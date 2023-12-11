#ifndef INCOMEINPUTSCREEN
#define INCOMEINPUTSCREEN

#include "incomerecord.h"

class IncomeInputScreen                         //Класс для ввода доходов
{
private:
    IncomeRecord* ptrIncomeRecord;              // запись о расходах
public:
    IncomeInputScreen(IncomeRecord* ptrIn);     // конструктор
    void setIncome();                           //добавить данные о доходе
};


#endif // INCOMEINPUTSCREEN

