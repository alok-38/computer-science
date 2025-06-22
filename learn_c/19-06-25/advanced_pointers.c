#include <stdio.h>

int main()
{
    char array[5] = {'a', 'A', 'b', 'z', 'M'};
    char *same_array = array;
    printf("Same array:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%c ", same_array[i]);
    }
    printf("\n");
}
