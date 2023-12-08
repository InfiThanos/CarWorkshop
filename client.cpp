#include <iostream>
#include "client.h"

using namespace std;

Client::Client(string p_name, string p_phoneNumber, string p_carBrand,          //конструктор
               string p_carModel, string p_VIN, string p_regPlate,
               unsigned __int32 p_yearOfManufacture,
               unsigned __int32 p_carMileage)
{
    name = p_name;
    phoneNumber = p_phoneNumber;
    carModel = p_carModel;
    carBrand = p_carBrand;
    VIN = p_VIN;
    regPlate = p_regPlate;
    yearOfManufacture = p_yearOfManufacture;
    carMileage = p_carMileage;
}
void Client::getInfoClient(string& p_name, string& p_phoneNumber, string& p_carBrand, //метод для возврата
                           string& p_carModel, string& p_VIN, string& p_regPlate,     //значения полей
                           unsigned __int32& p_yearOfManufacture,
                           unsigned __int32& p_carMileage)
{
    p_name = name;
    p_phoneNumber = phoneNumber;
    p_carModel = carModel;
    p_carBrand = carBrand;
    p_VIN = VIN;
    p_regPlate = regPlate;
    p_yearOfManufacture = yearOfManufacture;
    p_carMileage = carMileage;
}
