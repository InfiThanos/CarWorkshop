#include <iostream>
#include "expense.h"

using namespace std;

Expense::Expense(string p_date, string p_nameReceiver,                          //конструктор
        string p_typeOfPay, float p_amount)
{
    date = p_date;
    nameReceiver = p_nameReceiver;
    typeOfPay = p_typeOfPay;
    amount = p_amount;
}

float Expense::getAmount()                                                      //метод для возврата суммы расхода
{
    return amount;
}

string Expense::getTypeOfPay()                                                  //метод для возврата категории расхода
{
    return typeOfPay;
}

void Expense::getInfoExpense(string& p_date, string& p_nameReceiver,            //метод для возврата
                    string& p_typeOfPay, float& p_amount)                       //значения полей
{
    p_date = date;
    p_nameReceiver = nameReceiver;
    p_typeOfPay = typeOfPay;
    p_amount = amount;
}
