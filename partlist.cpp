#include <iostream>
#include "partlist.h"
#include <string>
#include <list>

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
    if (setPtrsParts.empty())                  // если список пуст
    {
        cout << "***Net detalei***\n" << endl;  // выводим запись, что он пуст
    }
    else
    {
        string p_partName;
        unsigned __int32 p_article, p_availability, p_price;

        iter = setPtrsParts.begin();

        while (iter != setPtrsParts.end()) // распечатываем всех клиентов
        {
            (*iter)->getInfoPart(p_partName, p_article, p_availability, p_price);
            cout << "Part name and article number\n" <<endl
                 << "\t" << p_partName << "\t" << p_article << endl << endl
                 << "Information" <<endl << "\t Article number: " << p_article
                 << "\t Quantity in stock: " << p_availability <<endl
                 << "\t Price: " << p_price << endl;

            cout << "-----------------------------------------------" << endl;
            *iter++;
        }
    }
}
