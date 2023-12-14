#include "expenserecord.h"
#include <iostream>
#include <iomanip>

using namespace std;

ExpenseRecord::~ExpenseRecord()                         //деструктор
{
    while (!vectPtrsExpense.empty())                    // удалить объекты
    {                                                   // удалить указатели на вектор
        iter = vectPtrsExpense.begin();
        delete *iter;
        vectPtrsExpense.erase(iter);
    }
}

void ExpenseRecord::insertExp(Expense* ptrExp)          //добавляем затраты в вектор
{
    vectPtrsExpense.push_back(ptrExp);
}

void ExpenseRecord::display()                           //распечатываем все расходы
{
    system("cls");
    cout << setw(15) << "Date|" << setw(20) << "Reciever|"
         << setw(20) << "Amount|" << setw(20) << "Category\n"
    << "--------------------------------------------------------------------------" << endl;
    if (vectPtrsExpense.size() == 0)                   // В контейнере нет расходов
        cout << "***There is no expenses***\n" << endl;
    else
    {
        iter = vectPtrsExpense.begin();
        string p_date,                                  //дата уплаты расходов
               p_nameReceiver,                          //получатель или название организации, которой перечисляются средства
               p_typeOfPay;                             //указывается с какой целью произведена транзакция (оплата ком. услуг, выплата кредита и др.)
        float p_amount;                                 //величина транзакции
        while (iter != vectPtrsExpense.end())
        {                                               // распечатываем все расходы
            (*iter)->getInfoExpense(p_date, p_nameReceiver,
                                    p_typeOfPay, p_amount);
            cout << setw(14) << p_date << "|" << setw(19) << p_nameReceiver << "|"
                 << setw(19) << p_amount << "|" << setw(19) << p_typeOfPay << endl;
             iter++;
        }
        cout << endl;
    }
}

float ExpenseRecord::displaySummary()                   //используется при составлении годового отчета
{
    system("cls");

    float totalExpenses = 0;                            // Сумма по всем категориям расходов

    if (vectPtrsExpense.size() == 0)
    {
        cout << "\tAll categories\t0\n";
        return 0;
    }
    iter = vectPtrsExpense.begin();
    while (iter != vectPtrsExpense.end())
    {                                                   //выводим на экран категории расходов
        cout << '\t' << ((*iter)->getTypeOfPay()) << '\t' << ((*iter)->getAmount()) << endl;
        totalExpenses += (*iter)->getAmount();          //подсчитываем все расходы
        iter++;
    }
    return totalExpenses;
}
