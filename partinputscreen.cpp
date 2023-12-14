#include <iostream>
#include <string>
#include <list>
#include <stdint.h>
#include "partinputscreen.h"

using namespace std;

PartInputScreen::PartInputScreen(PartList* ptrPART):ptrPartList(ptrPART)        // конструктор
{

}

void PartInputScreen::setPart()                                                 // добавить данные о детале
{
    string p_partName;
    uint16_t p_article, p_availability;
    float p_price;
    cin.sync();
    cout << "Enter the part name (Remen policlinoviy DAYCO): " << endl;
    getline(cin, p_partName);
    cout << "Enter article (51750): " << endl;
    cin >> p_article;
    cout << "Enter availability in stock (17): " << endl;
    cin >> p_availability;
    cout << "Enter price (932): " << endl;
    cin >> p_price;

    Part* ptrPart = new Part(p_partName, p_article, p_availability, p_price);   // создать деталь
    ptrPartList->insertPart(ptrPart);                                           // занести в список деталей
}
