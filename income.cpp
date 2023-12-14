#include <iostream>
#include "income.h"

using namespace std;

Income::Income(string p_date, string p_typeOfPay, float p_amount,                           //конструктор
               float p_orderNumber)
{
    date = p_date;
    typeOfPay = p_typeOfPay;
    amount = p_amount;
    orderNumber = p_orderNumber;
}

float Income::getAmount()                                                                   //метод для возврата суммы дохода
{
    return amount;
}

void Income::getInfoIncome(string& p_date, string& p_typeOfPay,                             //метод для возврата
                           float& p_amount, float& p_orderNumber)                           //значения полей
{
    p_date = date;
    p_typeOfPay = typeOfPay;
    p_amount = amount;
    p_orderNumber = orderNumber;
}

void Income::edit() // метод для редактирования
{
    cout << "If the field does not need to be edited, press Enter" <<endl;
    string p_date, p_typeOfPay, float p_amount, p_orderNumber;
    cout << "Old date: " << date << " New: ";
    cin >> p_date;
    if (p_date != "\n") date = p_date;

    cout << "Old reciever name: " << nameReceiver << " New: ";
    cin >> p_nameReceiver;

    cout << "Old type of pay: " << typeOfPay << " New: ";
        cin >> p_typeOfPay;
        if (p_typeOfPay != "\n") typeOfPay = p_typeOfPay;

    cout << "Old car amount: " << amount << " New: ";
        cin >> p_amount;
        if (p_amount != "\n") amount = atoll(p_amount.c_str());

    cout << "Old order number: " << orderNumber << " New: ";
        cin >> p_orderNumber;
        if (p_orderNumber != "\n") orderNumber = atoll(p_orderNumber.c_str());
}
