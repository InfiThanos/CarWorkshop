#include <iostream>
#include "part.h"

using namespace std;

Part::Part(string p_partName, float p_article,                                          //конструктор
           float p_availability, float p_price)
{
    partName = p_partName;
    article = p_article;
    availability = p_availability;
    price = p_price;
}
void Part::getInfoPart(string& p_partName, float& p_article,                            //метод для возврата
                           float& p_availability, float& p_price)                       //значения полей
{
   p_partName = partName;
   p_article = article;
   p_availability = availability;
   p_price = price;
}
