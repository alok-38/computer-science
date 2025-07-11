#include <stdio.h>

int doubleTheNumber(int number);

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%i", &number);
    printf("Double of this number is %i\n", doubleTheNumber(number));
}

int doubleTheNumber(int number)
{
    return 2 * number;
}