#include <stdio.h>

int main()
{
    float fahrenheit = 0;
    printf("Temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    float celsius = (5.0 / 9.0) * (fahrenheit - 32);
    printf("Temperature in Celsius: %.2f\n", celsius);
}