#include <iostream>
using namespace std;

int add(int a, int b);

int main()
{
    int value_1, value_2;
    cout << "Value1: ";
    cin >> value_1;
    cout << "Value2: ";
    cin >> value_2;
    int sum = add(value_1, value_2);
    cout << "Value_1 + Value_2 = " << sum << endl;
}

int add(int a, int b)
{
    return a + b;
}

class Calculator
{
public:
    // A member function to multiply two numbers
    int multiply(int a, int b)
    {
        return a * b;
    }
};