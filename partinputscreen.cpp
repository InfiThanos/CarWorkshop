#include <iostream>
#include "partinputscreen.h"
#include <string>
#include <list>

using namespace std;

PartInputScreen::PartInputScreen(PartList* ptrPART):ptrPartList(ptrPART)        //конструктор
{

}

void PartInputScreen::setPart()                                                 //добавить данные о детале
{
    string p_partName;
    float p_article, p_availability, p_price;
    cin.sync();
    cout << "Enter the part name (Remen policlinovii DAYCO): " << endl;
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
