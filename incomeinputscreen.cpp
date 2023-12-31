#include <iostream>
#include "incomeinputscreen.h"
#include <string>

using namespace std;

IncomeInputScreen::IncomeInputScreen(IncomeRecord* ptrIn):ptrIncomeRecord(ptrIn)    // конструктор
{

}

void IncomeInputScreen::setIncome()                                                 // добавить данные о доходе
{
    system("cls");

    string p_date,                                  // дата уплаты доходов
           p_typeOfPay;                             // указывается с какой целью произведена транзакция
                                                    // (оплата ком. услуг, выплата кредита и др.)
    float  p_amount,                                // величина транзакции
           p_orderNumber;                           // номер заказа

    cin.sync();
    cout << "Enter date (11/11/1111): " << endl;
    getline(cin, p_date);
    cout << "Enter order number (123456): " << endl;
    cin >> p_orderNumber;
    cin.sync(); // сбрасываем остаток строки и продолжаем ввод на новой строке
    cout << "Enter the payment method (Debit/credit card, cash): " << endl;
    getline(cin, p_typeOfPay);
    cout << "Enter sum (8952): " << endl;
    cin >> p_amount;

    Income* ptrIncome = new Income(p_date, p_typeOfPay,
                                   p_amount, p_orderNumber);                        // создать доход
    ptrIncomeRecord->insertInc(ptrIncome);                                          // занести в вектор
}
