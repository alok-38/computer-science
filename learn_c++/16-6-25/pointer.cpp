#include <iostream>

using namespace std;

int main()
{
    int value = 99;
    int *pointer_to_value = &value;

    cout << value << endl;
    cout << *pointer_to_value << endl;
}
