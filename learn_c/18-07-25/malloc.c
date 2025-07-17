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
    // Free the memory
    free(arr);

    return 0;
}
