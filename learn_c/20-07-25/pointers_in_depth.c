#include <stdio.h>

int main(void)
{
    int x = 10;
    int *p = &x;

    printf("Address of x: %p\n", (void *)p);
    printf("Value at pointer: %d\n", *p);

    // Pointer Arithmetic
    int arr[3] = {10, 20, 30};
    int *parr = arr;
    for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("arr[%zu] = %d\n", i, arr[i]);
    }

    // Next vaue in the array
    printf("Next value in array: %d\n", *(parr + 1));

    // Revison
    int arrp[5] = {10, 20, 30, 40, 50};
    // Same as: int *ptr = &arr[0];
    int *parr2 = arrp;
    printf("%d\n", *(parr2 + 2));
    return 0;
}
