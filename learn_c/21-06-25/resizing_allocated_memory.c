#include <stdio.h>
#include <stdlib.h>

// Prompt for a positive integer
int getPositiveInteger(const char *prompt)
{
    int value;
    while (1)
    {
        printf("%s", prompt);
        if (scanf("%d", &value) != 1 || value <= 0)
        {
            printf("Invalid input. Please enter a positive integer.\n");
            while (getchar() != '\n')
                ; // clear input buffer
        }
        else
        {
            return value;
        }
    }
}

// Read y/n response
char getYesOrNo(const char *prompt)
{
    char ch;
    while (1)
    {
        printf("%s", prompt);
        scanf(" %c", &ch);
        if (ch == 'y' || ch == 'Y' || ch == 'n' || ch == 'N')
            return ch;
        else
            printf("Please enter 'y' or 'n'.\n");
    }
}

// Input elements into array
void inputArray(int *arr, int start, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("Element %d: ", start + i + 1);
        while (scanf("%d", &arr[start + i]) != 1)
        {
            printf("Invalid input. Please enter an integer.\n");
            while (getchar() != '\n')
                ; // clear buffer
            printf("Element %d: ", start + i + 1);
        }
    }
}

// Print array contents
void printArray(const int *arr, int count)
{
    printf("Final array:\n");
    for (int i = 0; i < count; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Resize array with error check
int *resizeArray(int *arr, int newSize)
{
    int *temp = (int *)realloc(arr, newSize * sizeof(int));
    if (temp == NULL)
    {
        printf("Memory reallocation failed!\n");
        free(arr);
        exit(EXIT_FAILURE);
    }
    return temp;
}

// Core function
void demoDynamicMemory()
{
    int n = getPositiveInteger("Enter number of elements: ");

    int *arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter %d integers:\n", n);
    inputArray(arr, 0, n);

    if (getYesOrNo("Do you want to add more elements? (y/n): ") == 'y')
    {
        int extra = getPositiveInteger("How many more elements do you want to add? ");
        arr = resizeArray(arr, n + extra);
        printf("Enter %d more integers:\n", extra);
        inputArray(arr, n, extra);
        n += extra;
    }

    printArray(arr, n);
    free(arr);
}

int main()
{
    demoDynamicMemory();
    return 0;
}
