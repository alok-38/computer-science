#include <stdio.h>
#include <stdlib.h>

void demoDynamicMemory()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input validation
    if (n <= 0)
    {
        printf("Number of elements must be a positive integer.\n");
        return;
    }

    // Use calloc for zero-initialized memory
    int *arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }
    
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("You entered:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
}

int main()
{
    demoDynamicMemory();
    return 0;
}
