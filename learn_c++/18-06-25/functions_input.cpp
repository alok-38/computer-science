#include <iostream>
using namespace std;

double square(double x);
void print_square(double x);

int main()
{
    double user_input;
    cout << "Enter a decimal value: ";
    cin >> user_input;
    print_square(user_input); // Use the user input

    return 0;
}

double square(double x)
{
    return x * x;
}

void print_square(double x)
{
    cout << "The square of " << x << " is " << square(x) << endl;
}

