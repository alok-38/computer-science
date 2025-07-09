#include <iostream>
using namespace std;

int factorial(int n);

int main()
{
    cout << "How many factorials do you want? ";
    int howManyFactorials;
    cin >> howManyFactorials;
    for (int i = 0; i < howManyFactorials; i++)
    {
        cout << i << "! = " << factorial(i) << endl;
    }
}

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
