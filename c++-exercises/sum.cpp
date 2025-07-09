#include <iostream>
#include <cmath> // for isnan
using namespace std;

int main()
{
    double number1, number2;
    cout << "Enter two numbers: ";
    cin >> number1 >> number2;

    if (isnan(number1) || isnan(number2))
    {
        cout << "One of the inputs is NaN." << endl;
    }
    else
    {
        cout << "Sum = " << number1 + number2 << endl;
    }

    return 0;
}
