#include <iostream>
#include "annualreport.h"

using namespace std;

AnnualReport::AnnualReport(IncomeRecord* ptrIR, ExpenseRecord* ptrER) : ptrIR(ptrIR), ptrER(ptrER)
{

}

void AnnualReport::display()
{
    float incomes, expenses;
    cout << "Annual report\n--------------\n" << endl;
    cout << "Income\n" << endl;
    incomes = ptrIR->displaySummary();
    cout << incomes << endl;
    cout << "Expenses\n" << endl;
    expenses = ptrER->displaySummary();
    cout << "Total expenses:\t\t";
    cout << expenses << endl;
    // вычисляем прибыльность
    cout << "\nBalance:\t\t\t" << (incomes - expenses) << endl;
}
