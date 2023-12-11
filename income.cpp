#include <iostream>
#include "income.h"

using namespace std;

Income::Income(string p_date, string p_typeOfPay, unsigned __int32 p_amount,                //конструктор
               unsigned __int32 p_orderNumber)
{
    date = p_date;
    typeOfPay = p_typeOfPay;
    amount = p_amount;
    orderNumber = p_orderNumber;
}

unsigned __int32 Income::getAmount()                                                        //метод для возврата суммы дохода
{
    return amount;
}

void Income::getInfoIncome(string& p_date, string& p_typeOfPay,                             //метод для возврата
                           unsigned __int32& p_amount, unsigned __int32& p_orderNumber)     //значения полей
{
    p_date = date;
    p_typeOfPay = typeOfPay;
    p_amount = amount;
    p_orderNumber = orderNumber;
}
