#include <iostream>
using namespace std;

int main()
{
    // Allocate memory for a single integer
    int *pointer = new int;
    *pointer = 5;
    cout << *pointer << endl;

    // Deallocate memory and avoid dangling pointer
    delete pointer;
    pointer = nullptr;

    // Allocate memory for an array of 10 integers
    int size = 10;
    int *array = new int[size];

    // Initialize the array
    for (int i = 0; i < size; i++)
    {
        array[i] = i * 2;
    }

    // Optionally display the array (for verification)
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    // Deallocate array memory and avoid dangling pointer
    delete[] array;
    array = nullptr;
}
