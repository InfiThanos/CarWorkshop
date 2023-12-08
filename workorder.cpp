#include <iostream>
#include "workorder.h"

using namespace std;

WorkOrder::WorkOrder(unsigned __int32 p_orderNumber, string p_name,            //конструктор
                     string p_carBrand, string p_carModel,
                     string p_orderInfo, unsigned __int32 p_price,
                     string p_status)
{
    orderNumber = p_orderNumber;
    name = p_name;
    carBrand = p_carBrand;
    carModel = p_carModel;
    orderInfo = p_orderInfo;
    price = p_price;
    status = p_status;
}
void WorkOrder::getInfoWorkOrder(unsigned __int32& p_orderNumber,              //метод для возврата
                                 string& p_name, string& p_carBrand,           //значения полей
                                 string& p_carModel, string& p_orderInfo,
                                 unsigned __int32& p_price,
                                 string& p_status)
{
    p_orderNumber = orderNumber;
    p_name = name;
    p_carBrand = carBrand;
    p_carModel = carModel;
    p_orderInfo = orderInfo;
    p_price = price;
    p_status = status;
}

