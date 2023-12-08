#include <iostream>
#include "clientlist.h"
#include <string>
#include <list>

using namespace std;

ClientList::~ClientList()                       // деструктор - удаление клиентов
{
    while (!setPtrsClients.empty())
    {                                           // удаление указателей из контейнера
        iter = setPtrsClients.begin();
        delete *iter;
        setPtrsClients.erase(iter);
    }

}

void ClientList::insertClient(Client* ptrC)
{
    setPtrsClients.push_back(ptrC);             // вставка нового клиента в список
}

void ClientList::display()                      // вывод списка клиентов
{
    if (setPtrsClients.empty())                  // если список пуст
    {
        cout << "***No clients***\n" << endl;  // выводим запись, что он пуст
    }
    else
    {
        string p_name, p_phoneNumber,
               p_carBrand, p_carModel,
               p_VIN, p_regPlate;
        unsigned __int32 p_yearOfManufacture, p_carMileage;

        iter = setPtrsClients.begin();

        while (iter != setPtrsClients.end()) // распечатываем всех клиентов
        {
            (*iter)->getInfoClient(p_name, p_phoneNumber, p_carBrand,
                                   p_carModel, p_VIN, p_regPlate,
                                   p_yearOfManufacture,p_carMileage);
            cout << "Full name and contact information\n" <<endl
                 << "\t" << p_name << "\t" << p_phoneNumber << endl << endl
                 << "Information about the car" << endl
                 << "\t Car: " <<p_carBrand << " " << p_carModel <<endl
                 << "\t VIN: " << p_VIN << " Gosznak: " << p_regPlate <<endl
                 << "\t The year of manufacture of the car: " << p_yearOfManufacture
                 << " Mileage: " << p_carMileage << endl;

            cout << "-----------------------------------------------" << endl;
            *iter++;
        }
    }
}
