#ifndef INCOME
#define INCOME

#include <string>

using namespace std;

class Income                                                //Класс затрат
{
private:
    string date,                                            //дата уплаты чека
           typeOfPay;                                       //способ оплаты
    float amount,                                           //величина транзакции
          orderNumber;                                      //номер заказа
public:
    Income(string p_date, string p_typeOfPay, float p_amount,                           //конструктор
           float p_orderNumber);

    float getAmount();                                                                  //метод для возврата суммы дохода

    void getInfoIncome(string& p_date, string& p_typeOfPay,                             //метод для возврата
                        float& p_amount, float& p_orderNumber);                         //значения полей
    void edit();        // редактирование
};

#endif // INCOME

