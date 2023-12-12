#include <iostream>
#include "workorderinputscreen.h"
#include <string>
#include <list>

using namespace std;

WorkOrderInputScreen::WorkOrderInputScreen(WorkOrderList* ptrWO):ptrWorkOrderList(ptrWO)   //конструктор
{

}

void WorkOrderInputScreen::setWorkOrder()                                             //добавить данные о заказе
{
    string p_name, p_orderInfo,
           p_carBrand, p_carModel,
           p_status;
    unsigned __int32 p_orderNumber, p_price;
    cin.sync();
    cout << "Enter order number (123456): " << endl;
    cin >> p_orderNumber;
    cin.sync();
    cout << "Enter client's name (Ivanov Ivan Ivanovich): " << endl;
    getline(cin, p_name);
    cout << "Vvedite marky auto (Lada): " << endl;
    cin >> p_carBrand;
    cout << "Enter car model (Granta): " << endl;
    cin >> p_carModel;
    cout << "Enter order info (Scheduled maintenance): " << endl;
    getline(cin, p_orderInfo);
    cout << "Enter price (932): " << endl;
    cin >> p_price;
    cout << "Enter order status (in process): " << endl;
    getline(cin, p_status);

    WorkOrder* ptrWorkOrder = new WorkOrder(p_orderNumber, p_name,
                                            p_carBrand, p_carModel,
                                            p_orderInfo, p_price,
                                            p_status);                                  // создать заказ
    ptrWorkOrderList->insertWorkOrder(ptrWorkOrder);                                    // занести заказ в список

}
