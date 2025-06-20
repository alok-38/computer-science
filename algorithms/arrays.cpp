#include <iostream>

using namespace std;

int main()
{
    int my_array[5] = {1, 2, 3, 4, 5};
    cout << my_array[2] << endl; 
    // change the last element to something else
    int array_length = sizeof(my_array);
    cout << array_length << endl;
}
