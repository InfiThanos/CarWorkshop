#ifndef PARTINPUTSCREEN
#define PARTINPUTSCREEN

#include "partlist.h"
#include <string>

using namespace std;

class PartInputScreen                       //�����, �⢥��騩 �� �⮡ࠦ���� ?�࠭�?
{
private:
    PartList* ptrPartList;                  //㪠��⥫� �� ᯨ᮪ ��⠫��
public:
    PartInputScreen(PartList* ptrPART);     //���������
    void setPart();                         //�������� ����� � ��⠫�
};

#endif // PARTINPUTSCREEN
