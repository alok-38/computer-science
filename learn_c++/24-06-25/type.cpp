#include <iostream>

using namespace std;

int main()
{
    short int a;
    long int b;
    unsigned int c;

    cout << "Size of short int: " << sizeof(a) << " bytes" << endl;
    cout << "Size of long int: " << sizeof(b) << " bytes" << endl;
    cout << "Size of unsigned int: " << sizeof(c) << " bytes" << endl;
}