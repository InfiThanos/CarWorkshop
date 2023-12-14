#include <iostream>
#include <cstdlib>
#include <stdint.h>
#include "workorder.h"

using namespace std;

WorkOrder::WorkOrder( uint32_t p_orderNumber, string p_name,            //конструктор
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

void WorkOrder::getInfoWorkOrder(uint32_t& p_orderNumber,                       //метод для возврата
                                 string& p_name, string& p_carBrand,            //значения полей
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

    cin.sync();
    cout << "Old order number: " << orderNumber << " New: ";
    getline(cin, p_orderNumber);
    if (p_orderNumber != "") orderNumber = atoll(p_orderNumber.c_str());

    cout << "Old name: " << name << " New: ";
    getline(cin, p_name);
    if (p_name != "") name = p_name;

    cout << "Old car brand: " << carBrand << " New: ";
    getline(cin, p_carBrand);
    if (p_carBrand != "") carBrand = p_carBrand;

    cout << "Old car model: " << carModel << " New: ";
    getline(cin, p_carModel);
    if (p_carModel != "") carModel = p_carModel;

    cout << "Old order info: " << orderInfo << " New: ";
    getline(cin, p_orderInfo);
    if (p_orderInfo != "") orderInfo = p_orderInfo;

    cout << "Old price: " << price << " New: ";
    getline(cin, p_price);
    if (p_price != "") price = atof(p_price.c_str());

    cout << "Old status: " << status << " New: ";
    getline(cin, p_status);
    if (p_status != "") status = p_status;
}

