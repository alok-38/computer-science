#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *p = &x;

    // Dereference a pointer to modify value
    *p = 20;

    cout << *p << endl;  // prints 20

    int arr[5] = {1, 2, 3, 4, 5};

    // Now point p to the start of the array
    p = arr;  // No 'int *' here — just assign!

    cout << *p << endl;  // prints 1 (value at arr[0])

    return 0;
}

