#include <stdio.h>
int my_array[] = {1, 23, 17, 4, -5, 100};
int *ptr;

int main(void)
{
    // points to the first element of the array
    ptr = &my_array[0];
    printf("\n\n");
    for (int i = 0; i < 6; i++)
    {
        printf("my_array[%d] = %d\n", i, my_array[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("Pointer + %d = %d\n", i, *(ptr + i));
    }
    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        printf("ptr + %d = %d\n", i, *ptr++);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("ptr + %d = %d\n", i, *(++ptr));
    }
}
