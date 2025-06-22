#include <iostream>
#define MONTHS 12

using namespace std;

int main() {
    float annual_salary = 50000.99;
    float monthly_salary = annual_salary / MONTHS;

    cout << "Monthly salary = " << monthly_salary << endl;

    return 0;
}

