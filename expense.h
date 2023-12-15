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
    float  amount;                                  //����稭� �࠭���樨
public:
    Expense(string p_date, string p_nameReceiver,                           //���������
            string p_typeOfPay, float p_amount);

    float getAmount();                                                      //��⮤ ��� ������ �㬬� ��室�

    string getTypeOfPay();                                                  //��⮤ ��� ������ ��⥣�ਨ ��室�

    void getInfoExpense(string& p_date, string& p_nameReceiver,             //��⮤ ��� ������
                        string& p_typeOfPay, float& p_amount);              //���祭�� �����
    void edit();        // ।���஢����
};

#endif // EXPENSE
