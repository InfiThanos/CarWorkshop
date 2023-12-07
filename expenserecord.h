#ifndef EXPENSERECORD
#define EXPENSERECORD

#include <string>
#include <vector>
#include <expense.h>

using namespace std;

class ExpenseRecord                         //����� ����ᥩ � ������
{
private:
    vector<Expense*>vectPtrsExpense;        //����� 㪠��⥫�� �� ��室�
    vector<Expense*>::iterator iter;        //����� ��� ����� 㪠��⥫��
public:
    ~ExpenseRecord();                       //��������
    void insertExp(Expense* ptrExp);        //������塞 ������ � �����
    void display();                         //�ᯥ��뢠�� �� ��室�
    float displaySummary();                 //�ᯮ������ �� ��⠢����� �������� ����
};

#endif // EXPENSERECORD

