#include <iostream>
#include <cstdlib>
#include <stdint.h>
#include "part.h"


using namespace std;

Part::Part(string p_partName, uint32_t p_article,                             //конструктор
           uint32_t p_availability, float p_price)
{
    partName = p_partName;
    article = p_article;
    availability = p_availability;
    price = p_price;
}

void Part::getInfoPart(string& p_partName, uint32_t& p_article,      //метод для возврата
                           uint32_t& p_availability, float& p_price) //значения полей
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
    getline(cin, p_partName);
    if (p_partName != "") partName = p_partName;

    cout << "Old article: " << article << " New: ";
    getline(cin, p_article);
    if (p_article != "") article = atoll(p_article.c_str());

    cout << "Old car availability: " << availability << " New: ";
    getline(cin, p_availability);
    if (p_availability != "") availability = atoll(p_availability.c_str());

    cout << "Old price: " << price << " New: ";
    getline(cin, p_price);
    if (p_price != "") price = atof(p_price.c_str());
}
