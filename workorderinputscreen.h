#ifndef WORKORDERINPUTSCREEN
#define WORKORDERINPUTSCREEN

#include "workorderlist.h"
#include <string>

using namespace std;

class WorkOrderInputScreen                      // класс, отвечающий за отображение ?экрана?
{
private:
    WorkOrderList* ptrWorkOrderList;            // указатель на список заказ-нарядов
public:
    WorkOrderInputScreen(WorkOrderList* ptrWO); // конструктор
    void setWorkOrder();                        // добавить данные о заказ-наряде
};

#endif // WORKORDERINPUTSCREEN
