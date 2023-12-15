#ifndef EXPENSE
#define EXPENSE

#include <string>

using namespace std;

class Expense                                       //Класс затрат
{
private:
    string date,                                    //дата уплаты расходов
           nameReceiver,                            //получатель или название организации, которой перечисляются средства
           typeOfPay;                               //указывается с какой целью произведена транзакция (оплата ком. услуг, выплата кредита и др.)
    float  amount;                                  //величина транзакции
public:
    Expense(string p_date, string p_nameReceiver,                           //конструктор
            string p_typeOfPay, float p_amount);

    float getAmount();                                                      //метод для возврата суммы расхода

    string getTypeOfPay();                                                  //метод для возврата категории расхода

    void getInfoExpense(string& p_date, string& p_nameReceiver,             //метод для возврата
                        string& p_typeOfPay, float& p_amount);              //значения полей
    void edit();        // редактирование
};

#endif // EXPENSE
