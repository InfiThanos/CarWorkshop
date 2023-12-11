#ifndef CLIENTINPUTSCREEN
#define CLIENTINPUTSCREEN

#include "clientlist.h"
#include <string>

using namespace std;

class ClientInputScreen                         //класс, отвечающий за отображение ?экрана?
{
private:
    ClientList* ptrClientList;                  //указатель на список клиентов
public:
    ClientInputScreen(ClientList* ptrCL);       //конструктор
    void setClient();                           //добавить данные о клиенте
};

#endif // CLIENTINPUTSCREEN
