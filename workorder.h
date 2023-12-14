#ifndef WORKORDER
#define WORKORDER

#include <string>
#include <stdint.h>

using namespace std;

class WorkOrder                     // класс для хранения информации о заказ-наряде
{
private:
    string name,                    // ФИО клиента
           carBrand,                // бренд автомобиля
           carModel,                // модель автомобиля
           orderInfo,               // информация о заказе
           status;                  // статус заказа
    uint32_t orderNumber;   // номер заказа
    float price;            // стоимость работ/заказа
public:
    WorkOrder(uint32_t p_orderNumber, string p_name,            // конструктор
              string p_carBrand, string p_carModel,
              string p_orderInfo, float p_price,
              string p_status);

    void getInfoWorkOrder(uint32_t& p_orderNumber,              // метод для возврата
                          string& p_name, string& p_carBrand,         // значения полей
                          string& p_carModel, string& p_orderInfo,
                          float& p_price,
                          string& p_status);
    void edit();        // редактирование
};

#endif // WORKORDER

