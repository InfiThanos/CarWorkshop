#include <iostream>
#include <cstdlib>
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

void Expense::edit() // метод для редактирования
{
    cout << "If the field does not need to be edited, press Enter" <<endl;
    string p_date, p_nameReceiver,
           p_typeOfPay, p_amount;

    cin.sync();
    cout << "Old date: " << date << " New: ";
    getline(cin, p_date);
    if (p_date != "") date = p_date;

    cout << "Old reciever name: " << nameReceiver << " New: ";
    getline(cin, p_nameReceiver);
    if (p_nameReceiver != "") nameReceiver = p_nameReceiver;

    cout << "Old type of pay: " << typeOfPay << " New: ";
    getline(cin, p_typeOfPay);
    if (p_typeOfPay != "") typeOfPay = p_typeOfPay;

    cout << "Old amount: " << amount << " New: ";
    getline(cin, p_amount);
    if (p_amount != "") amount = atof(p_amount.c_str());
}
