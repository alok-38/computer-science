#include <stdio.h>

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < length; i++)
    {
        printf("%i\n", numbers[i]);
    }

    return 0;
}

