#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n = 5;
    // Allocate memory for 5 integers
    arr = (int *)malloc(n * sizeof(int));
    // Check for allocation failure
    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    // Use the allocated memory
    for (int i = 0; i < n; i++)
    {
        arr[i] = i * 2;
        printf("%d ", arr[i]);
    }
    printf("\n");
    // Free the memory
    free(arr);

    // Allocate memory for a single int
    int *ptr = (int *)malloc(sizeof(int));

    // Check if malloc failed
    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Use the allocated memory
    *ptr = 42;
    printf("Value stored in allocated memory: %d\n", *ptr);

    // Free the memory
    free(ptr);

    return 0;
}
