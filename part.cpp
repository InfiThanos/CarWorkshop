#include <iostream>
#include <cstdlib>
#include <stdint.h>
#include "part.h"


using namespace std;

Part::Part(string p_partName, uint16_t p_article,                             //конструктор
           uint16_t p_availability, float p_price)
{
    partName = p_partName;
    article = p_article;
    availability = p_availability;
    price = p_price;
}
void Part::getInfoPart(string& p_partName, uint16_t& p_article,      //метод для возврата
                           uint16_t& p_availability, float& p_price) //значения полей
{
   p_partName = partName;
   p_article = article;
   p_availability = availability;
   p_price = price;
}

void Part::edit()
{
    cout << "If the field does not need to be edited, press Enter" <<endl;
    string p_partName, p_article, p_availability, p_price;
    cout << "Old part name: " << partName << " New: ";
    cin >> p_partName;
    if (p_partName != "\n") partName = p_partName;

    cout << "Old article: " << article << " New: ";
    cin >> p_article;
    if (p_article != "\n") article = atoll(p_article.c_str());

    cout << "Old car availability: " << availability << " New: ";
        cin >> p_availability;
        if (p_availability != "\n") availability = atoll(p_availability.c_str());

    cout << "Old price: " << price << " New: ";
        cin >> p_price;
        if (p_price != "\n") price = atoll(p_price.c_str());
}
