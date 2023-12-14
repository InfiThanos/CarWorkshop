#include <iostream>
#include "workorderlist.h"
#include <stdint.h>
#include <string>
#include <list>

using namespace std;

WorkOrderList::~WorkOrderList()                 //деструктор - удаление заказ-нарядов
{
    while (!setPtrsWorkOrders.empty())
    {                                           // удаление указателей из контейнера
        iter = setPtrsWorkOrders.begin();
        delete *iter;
        setPtrsWorkOrders.erase(iter);
    }

}

void WorkOrderList::insertWorkOrder(WorkOrder* ptrW)
{
    setPtrsWorkOrders.push_back(ptrW);          // вставка нового заказ-наряда в список
}

void WorkOrderList::display()                   // вывод списка заказ-нарядов
{
    system("cls");
    if (setPtrsWorkOrders.empty())              // если список пуст
    {
        cout << "***No orders***\n" << endl;  // выводим запись, что он пуст
    }
    else
    {
        string p_name, p_orderInfo,
               p_carBrand, p_carModel,
               p_status;
        uint32_t p_orderNumber;
        float p_price;

        iter = setPtrsWorkOrders.begin();

        while (iter != setPtrsWorkOrders.end()) // распечатываем всех заказ-нарядов
        {
            (*iter)->getInfoWorkOrder(p_orderNumber, p_name,
                                      p_carBrand, p_carModel,
                                      p_orderInfo, p_price,
                                      p_status);
            cout << "Order number and client's full name\n" <<endl
                 << "\t" << p_orderNumber << "\t" << p_name << endl << endl
                 << "Information about the car" << endl
                 << "\t Car: " <<p_carBrand << " " << p_carModel <<endl
                 << "\t Info: " << p_orderInfo <<endl
                 << "\t Price: " << p_price
                 << " status: " << p_status << endl;

            cout << "-----------------------------------------------" << endl;
            cout << "'1' - Delete   '2' - Edit   'any other number' - Next" << endl;
            char choise;
            cin >> choise;
            if (choise == '1')
            {
                delete *iter;
                iter = setPtrsWorkOrders.erase(iter);
            }
            else if (choise == '2')
            {
                (*iter)->edit();
                ++iter;
            }
            else
            {
                ++iter;
            }
            cout << "-----------------------------------------------------" << endl;
        }
    }
}

