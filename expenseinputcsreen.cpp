#include <iostream>
#include "expenseinputscreen.h"
#include <string>

using namespace std;

ExpenseInputScreen::ExpenseInputScreen(ExpenseRecord* ptrEr):ptrExpenseRecord(ptrEr)//конструктор
{

}

void ExpenseInputScreen::setExpense()                                               //добавить данные о расходе
{
    string p_date,
           p_nameReceiver,
           p_typeOfPay;
    unsigned __int32 p_amount;
    cin.sync();
    cout << "Enter date (11/11/1111): " << endl;
    getline(cin, p_date);
    cout << "Enter receiver's name (KCM-Komfort): " << endl;
    getline(cin, p_nameReceiver);
    cout << "Enter type of pay (Kom. yslugi): " << endl;
    getline(cin, p_typeOfPay);
    cout << "Enter amount (8952): " << endl;
    cin >> p_amount;

    Expense* ptrExpense = new Expense(p_date, p_nameReceiver,
                                      p_typeOfPay, p_amount);                       // создать расход
    ptrExpenseRecord->insertExp(ptrExpense);                                        // занести в вектор
}
