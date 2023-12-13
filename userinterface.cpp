#include <iostream>
#include "userinterface.h"
#include <windows.h> // необходимо для работы функции Sleep()

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

void UserInterface::logoScreen()
{
    for (int i = 0; i < 8; i++) // цикл необходим, чтобы текст появлялся по середине экрана (для стандартного консольного приложения)
    {
        cout << endl;
    };

    string arr[10] = {
        "         .::.         :::.       -.       :=+=                      .===.                               -++-    ",
        "       -*+*@@#     =%@%:=@-     *%=      *@=+%                     *@* *@                             :%%.%+    ",
        "          #%@@=  :%*@@-        .=*      +@%+*=+-       .-++=*.    +@@..@=     :+-   =*.      -++=     @@**+++.  ",
        "         -@-*@% -%:*@@       -*@@+     .@@+++#@@     =%+.:%@=     @@%**:    +#@@   %@*    :##:.**    =@%++=@@+  ",
        "         #@ :@@*%..@@=     -*--@@    :+%@@+  %@=   .%@:  *@%   :+#@@-     ++.%@=  *@@ :  +@*       -+@@%- :@@.  ",
        "        .@+  @@#  *@@      .  %@+ :=+=.@@#  =@@ .+ %@+  *%@= :-. #@% .    . :@@.-*%@+ %+:@@.  .*: *:-@@-  %@+ :=",
        "    .%#-#*   ::   *@@+*-     .@@%*=   =@%.  *@@#+. %@%*+ %@%*=   %@%++.     :%%#--@@++- .%@%##+.    %@+  .@@%*= ",
        "      ..           ..          .      .      ..     ..    .       ..        .=+==@@=      ..        .      .    ",
        "                                                                            @@--##-                             ",
        "                                                                             ::.                                ",
    };

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
        Sleep(250); // система "засыпает" после отображения каждого элемента массива (в нашем случае один элемент - это одна строка);
                    // это нужно для того, чтобы текст появлялся с "анимацией"
    };

    Sleep(500); // необходимо для того, чтобы "загрузочный экран" еще некоторое время присутствовал на экране перед тем, как исчезнуть
    system("cls");
}


void UserInterface::interact()
{
    UserInterface logo;
    logo.logoScreen();
    char logIn = ptrLoginScreen->dispLogSc();
    while (true)
    {
        if (logIn != 0)
        {
            while (logIn != 0)
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
                         << "Add a part - 'p', \n"
                         << "Add a work-order - 'w', \n"
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

                        case 'p': system("cls");
                        ptrPartInputScreen =
                        new PartInputScreen(ptrPartList);
                        ptrPartInputScreen->setPart();
                        delete ptrPartInputScreen;
                        system("cls");
                        break;

                        case 'w': system("cls");
                        ptrWorkOrderInputScreen =
                        new WorkOrderInputScreen(ptrWorkOrderList);
                        ptrWorkOrderInputScreen->setWorkOrder();
                        delete ptrWorkOrderInputScreen;
                        system("cls");
                        break;

                        case 'i': system("cls");
                        ptrIncomeInputScreen =
                        new IncomeInputScreen(ptrIncomeRecord);
                        ptrIncomeInputScreen->setIncome();
                        delete ptrIncomeInputScreen;
                        system("cls");
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
                         << "Output of parts - 'p', \n"
                         << "Output of work-orders - 'w', \n"
                         << "Output of income - 'i' \n"
                         << "Output of expense - 'e', \n"
                         << "Annual report - 'a': \n";
                    cin >> choise;
                    switch (choise)
                    {
                        case 'c':
                        ptrClientList->display();
                        break;

                        case 'p':
                        ptrPartList->display();
                        break;

                        case 'w':
                        ptrWorkOrderList->display();
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
                {
                    system("cls");
                    cout << "Exit the program - 'q', \n"
                         << "Log out of your account - 'a', \n";
                    cin >> choise;
                    switch (choise)
                    {
                        case 'q':
                        return;
                        break;

                        case 'a':
                        logIn = 0;
                        break;
                    }
                }
                else
                {
                    cout << "Unknown function\n";
                }
            } //конец while(LogIn)
        }
        else
        {
            Sleep(500);
            logIn = ptrLoginScreen->dispLogSc();
        }
    } // конец while
}

