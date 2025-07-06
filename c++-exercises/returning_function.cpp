#include <iostream>
using namespace std;

// Function prototype
float calculate(float a, float b, char op);

int main()
{
    float a, b;
    char op;

    cout << "===== Function-Based Calculator =====" << endl;
    cout << "Enter two numbers (integers or floats): ";
    cin >> a >> b;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    // Handle division by zero and invalid operator before calling calculate
    if (op == '/' && b == 0)
    {
        cout << "Error! Division by zero." << endl;
    }
    else if (op != '+' && op != '-' && op != '*' && op != '/')
    {
        cout << "Invalid operator!" << endl;
    }
    else
    {
        float result = calculate(a, b, op);
        cout << a << " " << op << " " << b << " = " << result << endl;
    }

    return 0;
}

// Function to perform calculation
float calculate(float a, float b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    default:
        // This should never happen if checked correctly in main
        return 0;
    }
}
