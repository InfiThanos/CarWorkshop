#ifndef EXPENSEINPUTSCREEN
#define EXPENSEINPUTSCREEN

#include "expenserecord.h"

class ExpenseInputScreen                        //����� ��� ����� ��室��
{
private:
    ExpenseRecord* ptrExpenseRecord;            // ������ � ��室��
public:
    ExpenseInputScreen(ExpenseRecord* ptrEr);   // ���������
    void setExpense();                          //�������� ����� � ��室�
};

#endif // EXPENSEINPUTSCREEN
