#include <iostream>
using namespace std;

void calculate(float a, float b, char op);

int main()
{
    float a, b;
    char op;

    cout << "A basic function-based calculator" << endl;
    cout << "---------------------------------" << endl;

    cout << "Enter two values (int or float): ";
    cin >> a >> b;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    calculate(a, b, op);
    return 0;
}

void calculate(float a, float b, char op)
{
    switch (op)
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
}
