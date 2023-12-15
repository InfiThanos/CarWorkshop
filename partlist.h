#ifndef PARTLIST
#define PARTLIST

#include "part.h"
#include <list>

using namespace std;

class PartList                          //список всех деталей
{
private:
    list <Part*> setPtrsParts;          //список указателей на класс деталей
    list <Part*>::iterator iter;        //итератор
public:
    ~PartList();                        //деструктор - удаление деталей
    void insertPart(Part* ptrP);        //добавление детали в список
    void display();                     //вывод списка деталей
};

#endif // PARTLIST

