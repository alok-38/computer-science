#include <stdio.h>

int main()
{
    float value_1, value_2 = 0.0;

    printf("Enter first value: ");
    scanf("%f", &value_1);

    printf("Enter second value: ");
    scanf("%f", &value_2);

    printf("%.2f + %.2f = %.2f\n", value_1, value_2, value_1 + value_2);
}