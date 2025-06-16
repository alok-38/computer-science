#include <iostream>
#include <iomanip>  // for setprecision
using namespace std;

// Function to get a valid positive float input
float getPositiveInput(string prompt) {
    float value;
    do {
        cout << prompt;
        cin >> value;
        if (value < 0) {
            cout << "Please enter a non-negative value.\n";
        }
    } while (value < 0);
    return value;
}


// Function to calculate income tax
float calculateIncomeTax(float salary, float taxRate) {
    return (taxRate / 100) * salary;
}

// Function to calculate total deductions
float calculateTotalDeductions(float tax, float otherDeductions) {
    return tax + otherDeductions;
}

// Function to calculate take-home pay
float calculateTakeHomePay(float salary, float deductions) {
    return salary - deductions;
}

int main() {
    cout << fixed << setprecision(2);  // Format output to 2 decimal places

    float gross_salary = getPositiveInput("Enter Gross Salary: ");
    float tax_rate = getPositiveInput("Enter Income Tax Rate (%): ");
    float other_deductions = getPositiveInput("Enter Other Deductions: ");

    float income_tax = calculateIncomeTax(gross_salary, tax_rate);
    float total_deductions = calculateTotalDeductions(income_tax, other_deductions);
    float take_home_pay = calculateTakeHomePay(gross_salary, total_deductions);

    cout << "\n--- Salary Breakdown ---\n";
    cout << "Gross Salary       : $" << gross_salary << endl;
    cout << "Income Tax         : $" << income_tax << endl;
    cout << "Other Deductions   : $" << other_deductions << endl;
    cout << "Total Deductions   : $" << total_deductions << endl;
    cout << "Take-Home Pay      : $" << take_home_pay << endl;

    return 0;
}


