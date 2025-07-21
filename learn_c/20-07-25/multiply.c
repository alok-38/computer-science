#include <stdio.h>

int multiply(int value_1, int value_2);

int main(void)
{
    int value_1, value_2;
    printf("Enter two numbers followed by spaces: ");
    scanf("%i %i", &value_1, &value_2);
    printf("%i * %i = %i\n", value_1, value_2, multiply(value_1, value_2));
}

int multiply(int value_1, int value_2)
{
    return value_1 * value_2;
}