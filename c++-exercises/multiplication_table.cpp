#include <iostream>
using namespace std;

int main()
{
    cout << "Multiplication table from 1 to 10" << endl;
    cout << "---------------------------------" << endl;

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " x " << j << " = " << i * j << "\t";
        }
        cout << endl;
    }

    return 0;
}
