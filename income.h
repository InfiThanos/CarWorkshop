#ifndef INCOME
#define INCOME

#include <string>

using namespace std;

class Income                                                //Класс затрат
{
private:
    string date,                                            //дата уплаты чека
           typeOfPay;                                       //способ оплаты
    unsigned __int32 amount,                                //величина транзакции
                     orderNumber;                           //номер заказа
public:
    Income(string p_date, string p_typeOfPay, unsigned __int32 p_amount,                //конструктор
           unsigned __int32 p_orderNumber);

    unsigned __int32 getAmount();                                                       //метод для возврата суммы дохода

    void getInfoIncome(string& p_date, string& p_typeOfPay,                             //метод для возврата
                        unsigned __int32& p_amount, unsigned __int32& p_orderNumber);   //значения полей
};

#endif // INCOME

