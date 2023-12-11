#include <iostream>
#include "userinterface.h"

using namespace std;

UserInterface::UserInterface()
{
    ptrClientList = new ClientList;
    ptrPartList = new PartList;
    ptrWorkOrderList = new WorkOrderList;
    ptrIncomeRecord = new IncomeRecord;
    ptrExpenseRecord = new ExpenseRecord;
    ptrLoginScreen = new LoginScreen;
}

UserInterface::~UserInterface()
{
    delete ptrClientList;
    delete ptrPartList;
    delete ptrWorkOrderList;
    delete ptrIncomeRecord;
    delete ptrExpenseRecord;
    delete ptrLoginScreen;
}

void UserInterface::interact()
{
    char logIn = ptrLoginScreen->dispLogSc();
    if (logIn == 0) return;
    while (true)
    {
        char choise;
        cout << "Data entry - 'i', \n"
             << "Reporting output - 'o', \n"
             << "Exit - 'q': \n";
        cin >> choise;
        if (choise == 'i') // ввод данных
        {
            system("cls");
            cout << "Add a client - 'c', \n"
                 << "Add income - 'i', \n"
                 << "Add expense - 'e': \n";
            cin >> choise;
            switch (choise)
            {
                //экраны ввода существуют только во время их
                //использования
                case 'c': system("cls");
                ptrClientInputScreen =
                new ClientInputScreen(ptrClientList);
                ptrClientInputScreen->setClient();
                delete ptrClientInputScreen;
                system("cls");
                break;

                case 'i':
                if (logIn == 2)
                {
                    system("cls");
                    ptrIncomeInputScreen =
                    new IncomeInputScreen(ptrIncomeRecord);
                    ptrIncomeInputScreen->setIncome();
                    delete ptrIncomeInputScreen;
                    system("cls");
                }
                else
                {
                    cout << "The function is not available" << endl;
                }
                break;

                case 'e':
                if (logIn == 2)
                {
                    system("cls");
                    ptrExpenseInputScreen =
                    new ExpenseInputScreen(ptrExpenseRecord);
                    ptrExpenseInputScreen->setExpense();
                    delete ptrExpenseInputScreen;
                    system("cls");
                }
                else
                {
                    cout << "The function is not available" << endl;
                }
                break;

                default: cout << "Unknown function\n";
                break;
            } // конец секции switch
        } // конец условия if
        else if (choise == 'o') // вывод данных
        {
            system("cls");
            cout << "Output of clients - 'c', \n"
                 << "Output of income - 'i' \n"
                 << "Output of expense - 'e', \n"
                 << "Annual report - 'a': \n";
            cin >> choise;
            switch (choise)
            {
                case 'c':
                ptrClientList->display();
                break;

                case 'i':
                if (logIn == 2)
                {
                    ptrIncomeRecord->display();
                }
                else
                {
                    cout << "The function is not available" << endl;
                }
                break;

                case 'e':
                if (logIn == 2)
                {
                    ptrExpenseRecord->display();
                }
                else
                {
                    cout << "The function is not available" << endl;
                }
                break;

                case 'a':
                if (logIn == 2)
                {
                    ptrAnnualReport =
                    new AnnualReport(ptrIncomeRecord, ptrExpenseRecord);
                    ptrAnnualReport->display();
                    delete ptrAnnualReport;
                }
                else
                {
                    cout << "The function is not available" << endl;
                }
                break;

                default: cout << "Unknown function\n";
                break;
            } // конец switch
        } // конец elseif
        else if (choise == 'q')
            return; // выход
        else
            cout << "Unknown function\n";
    } // конец while
}

