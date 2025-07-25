#include <stdio.h>

// Function takes both array and its length
int find_max(int array[], int length);

int main(void)
{
    int array[] = {3, 7, 2, 9, 5};
    int length = sizeof(array) / sizeof(array[0]);  // Correctly get length
    printf("Max = %i\n", find_max(array, length));  // Pass array and length
    return 0;
}

int find_max(int array[], int length)
{
    // let the first element be the biggest
    int biggest = array[0];
    for (int i = 1; i < length; i++)
    {
        if (array[i] > biggest)
        {
            biggest = array[i];
        }
    }
    return biggest;
}

