#include <iostream>
using namespace std;

int main()
{
    int my_array[5] = {1, 2, 3, 4, 5};

    // Print the 3rd element (index 2)
    cout << my_array[2] << endl;

    // Change the last element
    my_array[4] = 10;

    // Calculate number of elements
    int array_length = sizeof(my_array) / sizeof(my_array[0]);
    cout << "Array length: " << array_length << endl;

    // Print the updated array
    for (int i = 0; i < array_length; i++)
    {
        cout << my_array[i] << " ";
    }
    cout << endl;
}