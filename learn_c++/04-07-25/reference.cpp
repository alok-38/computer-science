#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int &ref = x; // ref is a reference to x
    cout << &ref << endl;
    cout << &x << endl;
}
