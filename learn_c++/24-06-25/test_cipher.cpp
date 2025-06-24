#include <iostream>
using namespace std;

int main()
{
    char c1, c2, c3, c4, c5;
    cout << "Enter 5 letters: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "ASCII message: "
         << int(c1) << " "
         << int(c2) << " "
         << int(c3) << " "
         << int(c4) << " "
         << int(c5) << endl;

    int a1, a2, a3, a4, a5;
    cout << "Enter 5 ASCII codes: ";
    cin >> a1 >> a2 >> a3 >> a4 >> a5;

    cout << "Decoded message: "
         << char(a1)
         << char(a2)
         << char(a3)
         << char(a4)
         << char(a5)
         << endl;
    return 0;
}
