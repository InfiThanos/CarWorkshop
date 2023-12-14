#ifndef CLIENTLIST
#define CLIENTLIST

#include "client.h"
#include <list>

using namespace std;

class ClientList                        //список всех клиентов
{
private:
    list <Client*> setPtrsClients;      //список указателей на класс клиентов
    list <Client*>::iterator iter;      //итератор
public:
    ~ClientList();                      //деструктор - удаление клиентов
    void insertClient(Client* ptrC);    //добавление клиента в список
    void display();                     //вывод списка клиентов
};

#endif // CLIENTLIST

