#include <iostream>
using namespace std;

int main()
{
    float a, b;
    char opp;

    cout << "Enter two values: ";
    cin >> a >> b;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> opp;

    switch (opp)
    {
    case '+':
        cout << a << " + " << b << " = " << a + b << endl;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b << endl;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b << endl;
        break;
    case '/':
        if (b == 0)
        {
            cout << "Error! Division by zero." << endl;
        }
        else
        {
            cout << a << " / " << b << " = " << a / b << endl;
        }
        break;
    default:
        cout << "Invalid operator!" << endl;
    }

    return 0;
}
