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
    unsigned __int32 amount;                        //величина транзакции
public:
    Expense(string p_date, string p_nameReceiver,                           //конструктор
            string p_typeOfPay, unsigned __int32 p_amount);

    unsigned __int32 getAmount();                                           //метод для возврата суммы расхода

    string getTypeOfPay();                                                  //метод для возврата категории расхода

    void getInfoExpense(string& p_date, string& p_nameReceiver,             //метод для возврата
                        string& p_typeOfPay, unsigned __int32& p_amount);   //значения полей
};

#endif // EXPENSE
