#include <iostream>
#include <cstdlib>
#include <stdint.h>
#include "workorder.h"

using namespace std;

WorkOrder::WorkOrder( uint16_t p_orderNumber, string p_name,            //конструктор
                     string p_carBrand, string p_carModel,
                     string p_orderInfo,  float p_price,
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

void WorkOrder::getInfoWorkOrder(uint16_t& p_orderNumber,              //метод для возврата
                                 string& p_name, string& p_carBrand,           //значения полей
                                 string& p_carModel, string& p_orderInfo,
                                 float& p_price,
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

void WorkOrder::edit()
{
    cout << "If the field does not need to be edited, press Enter" << endl;
    string p_orderNumber, p_name, p_carBrand, p_carModel, p_orderInfo, p_price, p_status;
    cout << "Old order number: " << orderNumber << " New: ";
    cin >> p_orderNumber;
    if (p_orderNumber != "\n") orderNumber = atoll(p_orderNumber.c_str());

    cout << "Old name: " << name << " New: ";
    cin >> p_name;
    if (p_name != "\n") name = p_name;

    cout << "Old car brand: " << carBrand << " New: ";
        cin >> p_carBrand;
        if (p_carBrand != "\n") carBrand = p_carBrand;

    cout << "Old car model: " << carModel << " New: ";
        cin >> p_carModel;
        if (p_carModel != "\n") carModel = p_carModel;

    cout << "Old order info: " << orderInfo << " New: ";
        cin >> p_orderInfo;
        if (p_orderInfo != "\n") orderInfo = p_orderInfo;

    cout << "Old price: " << price << " New: ";
        cin >> p_price;
        if (p_price != "\n") price = atoll(p_price.c_str());

    cout << "Old status: " << status << " New: ";
        cin >> p_status;
        if (p_status != "\n") status = p_status;
}

