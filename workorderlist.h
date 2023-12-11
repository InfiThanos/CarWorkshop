#ifndef WORKORDERLIST
#define WORKORDERLIST

#include "workorder.h"
#include <string>
#include <list>

using namespace std;

class WorkOrderList                             //список всех заказ-нарядов
{
private:
    list <WorkOrder*> setPtrsWorkOrders;        //список указателей на класс заказ-нарядов
    list <WorkOrder*>::iterator iter;           //итератор
public:
    ~WorkOrderList();                           //деструктор - удаление заказ-нарядов
    void insertWorkOrder(WorkOrder* ptrW);      //добавление заказ-наряда в список
    void display();                             //вывод списка заказ-нарядов
};

#endif // WORKORDERLIST

