#include <iostream>
#include <cstdlib>
#include "client.h"

using namespace std;

Client::Client(string p_name, string p_phoneNumber, string p_carBrand,          //конструктор
               string p_carModel, string p_VIN, string p_regPlate,
               float p_yearOfManufacture, float p_carMileage)
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
                           float& p_yearOfManufacture, float& p_carMileage)
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

void Client::edit()
{
    cout << "If the field does not need to be edited, press Enter" <<endl;
    string p_name, p_phoneNumber, p_carBrand, p_carModel,
           p_VIN, p_regPlate, p_yearOfManufacture, p_carMileage;
    cout << "Old name: " << name << " New: ";
    cin >> p_name;
    if (p_name != "\n") name = p_name;

    cout << "Old phone number: " << phoneNumber << " New: ";
    cin >> p_phoneNumber;
    if (p_phoneNumber != "\n") phoneNumber = p_phoneNumber;

    cout << "Old car brand: " << carBrand << " New: ";
        cin >> p_carBrand;
        if (p_carBrand != "\n") carBrand = p_carBrand;

    cout << "Old car model: " << carModel << " New: ";
        cin >> p_carModel;
        if (p_carModel != "\n") carModel = p_carModel;

    cout << "Old VIN: " << VIN << " New: ";
        cin >> p_VIN;
        if (p_VIN != "\n") VIN = p_VIN;

    cout << "Old reg plate: " << regPlate << " New: ";
        cin >> p_regPlate;
        if (p_regPlate != "\n") regPlate = p_regPlate;

    cout << "Old year of manufacture: " << yearOfManufacture << " New: ";
            cin >> p_yearOfManufacture;
            if (p_yearOfManufacture != "\n") yearOfManufacture = atoll(p_yearOfManufacture.c_str());

    cout << "Old car mileage: " << carMileage << " New: ";
            cin >> p_carMileage;
            if (p_carMileage != "\n") carMileage = atoll(p_carMileage.c_str());
}
