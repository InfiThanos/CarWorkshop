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
