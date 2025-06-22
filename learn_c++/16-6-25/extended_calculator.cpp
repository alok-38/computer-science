#include <iostream>
using namespace std;

struct Calculator
{
    int add(int a, int b)
    {
        return a + b;
    }

    int subtract(int a, int b)
    {
        return a - b;
    }

    int multiply(int a, int b)
    {
        return a * b;
    }

    double divide(double a, double b)
    {
        if (b == 0)
        {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return a / b;
    }
};

int main()
{
    Calculator calc;
    int choice;
    double num1, num2;

    do
    {
        cout << "\n=== Simple Calculator Menu ===" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Exit" << endl;
        cout << "Choose an option (1-5): ";
        cin >> choice;

        if (choice >= 1 && choice <= 4)
        {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }

        switch (choice)
        {
        case 1:
            cout << "Result: " << calc.add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result: " << calc.subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Result: " << calc.multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Result: " << calc.divide(num1, num2) << endl;
            break;
        case 5:
            cout << "Exiting calculator. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice! Please enter a number between 1 and 5." << endl;
        }

    } while (choice != 5);

    return 0;
}
