#include <iostream>

using namespace std;

int main()
{
    float gross_salary, income_tax_rate, other_deductions;

    cout << "Gross Salary: ";
    cin >> gross_salary;

    cout << "Income tax rate(%): ";
    cin >> income_tax_rate;

    cout << "Other deductions: ";
    cin >> other_deductions;

    float income_tax = (income_tax_rate / 100) * gross_salary;
    float total_deductions = income_tax + other_deductions;
    float take_home_pay = gross_salary - total_deductions;

    cout << "Take home pay: " << take_home_pay << endl;
}

