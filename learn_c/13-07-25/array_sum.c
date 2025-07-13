#include <stdio.h>

int main(void)
{
    int numbers[] = {1, 2, 3, 4};
    int sum = 0;
    // Calculate array length
    int array_length = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < array_length; i++)
    {
        sum += numbers[i];
    }
    printf("Sum = %i\n", sum);
}