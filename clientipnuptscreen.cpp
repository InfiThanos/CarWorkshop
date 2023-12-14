#include <iostream>
#include "clientinputscreen.h"
#include <string>
#include <list>

using namespace std;

ClientInputScreen::ClientInputScreen(ClientList* ptrCL):ptrClientList(ptrCL)   //конструктор
{

}

void ClientInputScreen::setClient()                                             //добавить данные о клиенте
{
    string p_name, p_phoneNumber,
           p_carBrand, p_carModel,
           p_VIN, p_regPlate;
    float  p_yearOfManufacture, p_carMileage;
    cin.sync();
    cout << "Enter client's name (Ivanov Ivan Ivanovich): " << endl;
    getline(cin, p_name);
    cout << "Enter the client's phone number (8(953)545-53-45): " << endl;
    cin >> p_phoneNumber;
    cout << "Enter the car brand (Lada): " << endl;
    cin >> p_carBrand;
    cout << "Enter car model (Granta): " << endl;
    cin >> p_carModel;
    cout << "Enter VIN (WAUBH54B11N111054): " << endl;
    cin >> p_VIN;
    cout << "Enter the register plate (H220AB10): " << endl;
    cin >> p_regPlate;
    cout << "Enter the year of manufacture (2011): " << endl;
    cin >> p_yearOfManufacture;
    cout << "Enter mileage (134232): " << endl;
    cin >> p_carMileage;

    Client* ptrClient = new Client(p_name, p_phoneNumber, p_carBrand,
                                   p_carModel, p_VIN, p_regPlate,
                                   p_yearOfManufacture,p_carMileage);           // создать клиента
    ptrClientList->insertClient(ptrClient);                                     // занести в список клиентов
}
