#ifndef WORKORDERINPUTSCREEN
#define WORKORDERINPUTSCREEN

#include "workorderlist.h"
#include <string>

using namespace std;

class WorkOrderInputScreen                      //�����, �⢥��騩 �� �⮡ࠦ���� ?�࠭�?
{
private:
    WorkOrderList* ptrWorkOrderList;            //㪠��⥫� �� ᯨ᮪ �����-���冷�
public:
    WorkOrderInputScreen(WorkOrderList* ptrWO); //���������
    void setWorkOrder();                        //�������� ����� � �����-���拉
};

#endif // WORKORDERINPUTSCREEN
