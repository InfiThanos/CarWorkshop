#include <iostream>
#include <stdint.h>
#include <string>
#include <list>
#include "partlist.h"

using namespace std;

PartList::~PartList()                           // деструктор - удаление деталей
{
    while (!setPtrsParts.empty())
    {                                           // удаление указателей из контейнера
        iter = setPtrsParts.begin();
        delete *iter;
        setPtrsParts.erase(iter);
    }

}

void PartList::insertPart(Part* ptrP)
{
    setPtrsParts.push_back(ptrP);             // вставка нового детали в список
}

void PartList::display()                      // вывод списка деталей
{
    system("cls");
    if (setPtrsParts.empty())                  // если список пуст
    {
        cout << "***No details***\n" << endl;  // выводим запись, что он пуст
    }
    else
    {
        string p_partName;
        uint32_t p_article, p_availability;
        float p_price;

        iter = setPtrsParts.begin();

        while (iter != setPtrsParts.end()) // распечатываем всех клиентов
        {
            (*iter)->getInfoPart(p_partName, p_article, p_availability, p_price);
            cout << "Part name\n" <<endl
                 << "\t" << p_partName << endl << endl
                 << "Information" <<endl << "\t Article number: " << p_article
                 << "\t Quantity in stock: " << p_availability <<endl
                 << "\t Price: " << p_price << endl;

            cout << "--------------------------------------------------------------------" << endl;
            cout << "'1' - Delete   '2' - Edit   'any other number' - Next" << endl;
            char choise;
            cin >> choise;
            if (choise == '1')
            {
                delete *iter;
                iter = setPtrsParts.erase(iter);
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
            cout << "--------------------------------------------------------------------" << endl;
        }
    }
}
