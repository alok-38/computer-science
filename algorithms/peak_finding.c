#include <stdio.h>

int main(void)
{
    int array[] = {1, 2, 3, 4, 5};
    int length = sizeof(array) / sizeof(array[0]); // Number of elements
    int index;
     for (index = 0; index < length; index++)
    {
        if (index == 0)
        {
            // First element: check if >= next element
            if (length == 1 || array[index] >= array[index + 1])
            {
                printf("Peak found at index %d, value %d\n", index, array[index]);
                return 0;
            }
        }
    }
}
