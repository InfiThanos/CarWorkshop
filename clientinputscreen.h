#ifndef CLIENTINPUTSCREEN
#define CLIENTINPUTSCREEN

#include "clientlist.h"
#include <string>

using namespace std;

class ClientInputScreen                         //�����, �⢥��騩 �� �⮡ࠦ���� ?�࠭�?
{
private:
    ClientList* ptrClientList;                  //㪠��⥫� �� ᯨ᮪ �����⮢
public:
    ClientInputScreen(ClientList* ptrCL);       //���������
    void setClient();                           //�������� ����� � ������
};

#endif // CLIENTINPUTSCREEN
