#include <iostream>
using namespace std;

int main()
{
    cout << "How many Factorials do you want to produce? ";
    int howManyFactorials;
    cin >> howManyFactorials;

    for (int n = 0; n < howManyFactorials; n++)
    {
        int factorial = 1;
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        cout << n << "! = " << factorial << endl;
    }

    return 0;
}
