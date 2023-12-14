#ifndef PARTINPUTSCREEN
#define PARTINPUTSCREEN

#include "partlist.h"

using namespace std;

class PartInputScreen                       // класс, отвечающий за отображение ?экрана?
{
private:
    PartList* ptrPartList;                  // указатель на список деталей
public:
    PartInputScreen(PartList* ptrPART);     // конструктор
    void setPart();                         // добавить данные о детале
};

#endif // PARTINPUTSCREEN
