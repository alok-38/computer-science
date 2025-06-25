#include <iostream>
using namespace std;

int main()
{
    const double rate = 0.075;
    double principal;
    int time;

    cout << "Enter principal amount: ₹";
    cin >> principal;

    cout << "Enter time in years: ";
    cin >> time;

    double interest = principal * rate * time;
    cout << "Simple Interest = ₹" << interest << endl;

    cout << "Total amount = ₹" <<  principal + interest << endl;

    return 0;
}

