#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int multiply(int a, int b)
    {
        return a * b;
    }
};

int main()
{
    int value_1, value_2;
    Calculator calc;

    cout << "Value1: ";
    cin >> value_1;
    cout << "Value2: ";
    cin >> value_2;

    int sum = calc.add(value_1, value_2);
    cout << "Value_1 + Value_2 = " << sum << endl;

    // Optional: Show multiply as well
    int product = calc.multiply(value_1, value_2);
    cout << "Value_1 * Value_2 = " << product << endl;
}
