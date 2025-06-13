#include <stdio.h>

int main()
{
    int sum = 0;
    int number;
    int digit;

    printf("Enter the number whose digits you want to sum: ");
    scanf("%i", &number);

    int original = number;

    if (number < 0)
        number = -number; // Make positive for digit extraction

    while (number > 0)
    {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("Sum of digits of %i = %i\n", original, sum);

    return 0;
}
