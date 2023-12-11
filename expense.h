#ifndef EXPENSE
#define EXPENSE

#include <string>

using namespace std;

class Expense                                       //����� �����
{
private:
    string date,                                    //��� 㯫��� ��室��
           nameReceiver,                            //�����⥫� ��� �������� �࣠����樨, ���ன ���������� �।�⢠
           typeOfPay;                               //㪠�뢠���� � ����� 楫�� �ந������� �࠭����� (����� ���. ���, �믫�� �।�� � ��.)
    unsigned __int32 amount;                        //����稭� �࠭���樨
public:
    Expense(string p_date, string p_nameReceiver,                           //���������
            string p_typeOfPay, unsigned __int32 p_amount);

    unsigned __int32 getAmount();                                           //��⮤ ��� ������ �㬬� ��室�

    string getTypeOfPay();                                                  //��⮤ ��� ������ ��⥣�ਨ ��室�

    void getInfoExpense(string& p_date, string& p_nameReceiver,             //��⮤ ��� ������
                        string& p_typeOfPay, unsigned __int32& p_amount);   //���祭�� �����
};

#endif // EXPENSE
