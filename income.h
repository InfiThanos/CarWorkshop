#ifndef INCOME
#define INCOME

#include <string>
#include <stdint.h>

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
           uint32_t p_orderNumber);

    float getAmount();                                                                  //метод для возврата суммы дохода

    void getInfoIncome(string& p_date, string& p_typeOfPay,                             //метод для возврата
                        float& p_amount, uint32_t& p_orderNumber);                      //значения полей
    void edit();        // редактирование
};

#endif // INCOME

