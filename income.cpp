#include <iostream>
#include <cstdlib>
#include <stdint.h>
#include "income.h"

using namespace std;

Income::Income(string p_date, string p_typeOfPay, float p_amount,                           //конструктор
               uint32_t p_orderNumber)
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
                           float& p_amount, uint32_t& p_orderNumber)                        //значения полей
{
    p_date = date;
    p_typeOfPay = typeOfPay;
    p_amount = amount;
    p_orderNumber = orderNumber;
}

void Income::edit() // метод для редактирования
{
    cout << "If the field does not need to be edited, press Enter" <<endl;
    string p_date, p_typeOfPay,
           p_amount, p_orderNumber;

    cin.sync();
    cout << "Old date: " << date << " New: ";
    getline(cin, p_date);
    if (p_date != "") date = p_date;

    cout << "Old type of pay: " << typeOfPay << " New: ";
    getline(cin, p_typeOfPay);
    if (p_typeOfPay != "") typeOfPay = p_typeOfPay;

    cout << "Old car amount: " << amount << " New: ";
    getline(cin,  p_amount);
    if (p_amount != "") amount = atof(p_amount.c_str());

    cout << "Old order number: " << orderNumber << " New: ";
    getline(cin, p_orderNumber);
    if (p_orderNumber != "") orderNumber = atoll(p_orderNumber.c_str());
}
