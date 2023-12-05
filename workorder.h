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
    unsigned __int32 orderNumber,   //номер заказа
                     price;         //стоимость работ/заказа
public:
    WorkOrder(unsigned __int32 orderNumber, string name,                //конструктор
              string carBrand, string carModel,
              string orderInfo, unsigned __int32 price,
              string status);

    string getInfoWorkOrder(unsigned __int32& p_orderNumber,            //метод для возврата
                            string& p_name, string& p_carBrand,         //значения полей
                            string& p_carModel, string& p_orderInfo,
                            unsigned __int32& p_price,
                            string& p_status);
};

#endif // WORKORDER

