#include <iostream>
#include <cstdlib>
#include <stdint.h>
#include "client.h"

using namespace std;

Client::Client(string p_name, string p_phoneNumber, string p_carBrand,          // конструктор
               string p_carModel, string p_VIN, string p_regPlate,
               uint32_t p_yearOfManufacture,
               float p_carMileage)

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

void Client::getInfoClient(string& p_name, string& p_phoneNumber, string& p_carBrand, // метод для возврата
                           string& p_carModel, string& p_VIN, string& p_regPlate,     // значения полей
                           uint32_t& p_yearOfManufacture,
                           float& p_carMileage)
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

void Client::edit() // метод для редактирования
{
    cout << "If the field does not need to be edited, press Enter" <<endl;
    cin.sync();
    string p_name, p_phoneNumber, p_carBrand, p_carModel,
           p_VIN, p_regPlate, p_yearOfManufacture, p_carMileage;
    cout << "Old name: " << name << " New: ";
    getline(cin, p_name);
    if (p_name != "") name = p_name;

    cout << "Old phone number: " << phoneNumber << " New: ";
    getline(cin, p_phoneNumber);
    if (p_phoneNumber != "") phoneNumber = p_phoneNumber;

    cout << "Old car brand: " << carBrand << " New: ";
    getline(cin, p_carBrand);
    if (p_carBrand != "") carBrand = p_carBrand;

    cout << "Old car model: " << carModel << " New: ";
    getline(cin, p_carModel);
    if (p_carModel != "") carModel = p_carModel;

    cout << "Old VIN: " << VIN << " New: ";
    getline(cin, p_VIN);
    if (p_VIN != "") VIN = p_VIN;

    cout << "Old reg plate: " << regPlate << " New: ";
    getline(cin, p_regPlate);
    if (p_regPlate != "") regPlate = p_regPlate;

    cout << "Old year of manufacture: " << yearOfManufacture << " New: ";
    getline(cin, p_yearOfManufacture);
    if (p_yearOfManufacture != "") yearOfManufacture = atoll(p_yearOfManufacture.c_str());

    cout << "Old car mileage: " << carMileage << " New: ";
    getline(cin, p_carMileage);
    if (p_carMileage != "") carMileage = atof(p_carMileage.c_str());
}
