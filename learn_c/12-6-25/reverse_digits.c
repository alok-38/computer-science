#include <stdio.h>

int main()
{
    printf("Enter a number whose digits you want to reverse: ");
    int number;
    scanf("%i", &number);

    if (number == 0)
    {
        printf("0\n");
        return 0;
    }

    if (number < 0)
    {
        printf("-");
        number = -number;
    }

    while (number != 0)
    {
        int right_digit = number % 10;
        printf("%i", right_digit);
        number /= 10;
    }

    printf("\n");
    return 0;
}
