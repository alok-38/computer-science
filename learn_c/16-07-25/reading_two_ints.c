#include <stdio.h>

int main(void)
{
    int x, y, result;
    printf("Enter two integers: ");
    // Attempt to read two integers
    result = scanf("%d %d", &x, &y);
    if (result == 2)
    {
        printf("Success! You entered: x = %d, y = %d\n", x, y);
    }
    else if (result == 1)
    {
        printf("Only one valid integer entered. The second input is invalid.\n");
    }
    else if (result == 0)
    {
        printf("Invalid input: no integers read.\n");
    }
    else if (result == EOF)
    {
        printf("End of input reached.\n");
    }
    return 0;
}
