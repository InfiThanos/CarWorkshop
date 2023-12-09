#include "incomerecord.h"
#include <iostream>

using namespace std;

IncomeRecord::~IncomeRecord()                           // деструктор
{
    while (!vectPtrsIncome.empty())                     // удалить объекты
    {                                                   // удалить указатели на вектор
        iter = vectPtrsIncome.begin();
        delete *iter;
        vectPtrsIncome.erase(iter);
    }
}

void IncomeRecord::insertInc(Income* ptrInc)            // добавляем доходы в вектор
{
    vectPtrsIncome.push_back(ptrInc);
}

void IncomeRecord::display()                            // распечатываем все доходы
{
    cout << "Date\t Order number\t Sum\t Payment method\n"
    << "----------------------------------------\n" << endl;
    if (vectPtrsIncome.size() == 0)                     // в контейнере нет доходов
        cout << "***There is no income***\n" << endl;
    else
    {
        iter = vectPtrsIncome.begin();
        string p_date,                                  // дата уплаты доходов
               p_typeOfPay;                             // указывается способ оплаты
        unsigned __int32 p_amount,                      // величина транзакции
                         p_orderNumber;                 // номер заказа
        while (iter != vectPtrsIncome.end())
        {                                               // распечатываем сумму доходов
            (*iter)->getInfoIncome(p_date, p_typeOfPay,
                                   p_amount, p_orderNumber);
            cout << p_date << "\t " << p_orderNumber << "\t "
                 << p_amount << "\t " << p_typeOfPay << endl;
             iter++;
        }
        cout << endl;
    }
}

float IncomeRecord::displaySummary()                   // используется при составлении годового отчета
{
    float totalIncomes = 0;                            // Сумма доходов

    if (vectPtrsIncome.size() == 0)
    {
        return 0;
    }
    iter = vectPtrsIncome.begin();
    while (iter != vectPtrsIncome.end())
    {
        totalIncomes += (*iter)->getAmount();          // подсчитываем все доходы
        iter++;
    }
    return totalIncomes;
}

