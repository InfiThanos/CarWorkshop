#include "incomerecord.h"
#include <iostream>
#include <iomanip>

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
    system("cls");
    cout << setw(15) << "Date|" << setw(20) << "Order number|"
         << setw(15) << "Sum|" << setw(20) << "Payment method\n"
    << "---------------------------------------------------------------------" << endl;
    if (vectPtrsIncome.size() == 0)                     // в контейнере нет доходов
        cout << "***There is no income***\n" << endl;
    else
    {
        iter = vectPtrsIncome.begin();
        string   p_date,                                // дата уплаты доходов
                 p_typeOfPay;                           // указывается способ оплаты
        float    p_amount;                              // величина транзакции
        uint32_t p_orderNumber;                         // номер заказа
        while (iter != vectPtrsIncome.end())
        {                                               // распечатываем сумму доходов
            (*iter)->getInfoIncome(p_date, p_typeOfPay,
                                   p_amount, p_orderNumber);
            cout << setw(14) << p_date << "|" << setw(19) << p_orderNumber << "|"
                 << setw(14) << p_amount << "|" << setw(19) << p_typeOfPay << endl;

            cout << "--------------------------------------------------------------------------" << endl;
            cout << "'1' - Delete   '2' - Edit   'any other number' - Next" << endl;
            char choise;
            cin >> choise;
            if (choise == '1')
            {
                delete *iter;
                iter = vectPtrsIncome.erase(iter);
            }
            else if (choise == '2')
            {
                (*iter)->edit();
                ++iter;
            }
            else
            {
                ++iter;
            }
            cout << "-----------------------------------------------------" << endl;
        }
     }
        cout << endl;
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

