#include <iostream>
#include <iomanip>
#define MONTHS 12

using namespace std;

int main() {
    double annual_salary = 0;
    cout << "Enter annual salary: $";
    cin >> annual_salary;

    double monthly_salary = annual_salary / MONTHS;

    cout << fixed << setprecision(2); // Ensures 2 decimal places
    cout << "Your monthly salary: $" << monthly_salary << endl;

    return 0;
}

