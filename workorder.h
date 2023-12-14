#ifndef WORKORDER
#define WORKORDER

#include <string>

using namespace std;

class WorkOrder                     //класс для хранения информации о заказ-наряде
{
private:
    string name,                    //ФИО клиента
           carBrand,                //бренд автомобиля
           carModel,                //модель автомобиля
           orderInfo,               //информация о заказе
           status;                  //статус заказа
    float orderNumber,              //номер заказа
          price;                    //стоимость работ/заказа
public:
    WorkOrder(float p_orderNumber, string p_name,                       //конструктор
              string p_carBrand, string p_carModel,
              string p_orderInfo, float p_price,
              string p_status);

    void getInfoWorkOrder(float& p_orderNumber, string& p_name, string& p_carBrand,         //метод для возврата
                            string& p_carModel, string& p_orderInfo,float& p_price,         //значения полей
                            string& p_status);
};

#endif // WORKORDER

