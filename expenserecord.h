#ifndef EXPENSERECORD
#define EXPENSERECORD

#include <string>
#include <vector>
#include <expense.h>

using namespace std;

class ExpenseRecord                         //Класс записей о затратах
{
private:
    vector<Expense*>vectPtrsExpense;        //вектор указателей на расходы
    vector<Expense*>::iterator iter;        //итератор для вектора указателей
public:
    ~ExpenseRecord();                       //деструктор
    void insertExp(Expense* ptrExp);        //добавляем затраты в вектор
    void display();                         //распечатываем все расходы
    float displaySummary();                 //используется при составлении годового отчета
};

#endif // EXPENSERECORD

