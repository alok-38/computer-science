#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *p = &x; // p points to x
    cout << "x = " << x << endl;
    cout << "Address of x: " << p << endl;           // print pointer (address)
    cout << "Value pointed to by p: " << *p << endl; // print value of x through pointer
                                                     // Pointer to pointer
    int **pp = &p;                                   // Use a different variable name
    cout << "Value pointed to by pointer to pointer: " << **pp << endl;
}
