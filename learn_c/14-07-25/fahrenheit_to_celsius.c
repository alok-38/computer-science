#include <stdio.h>

double fahrenheit_to_celsius(double fahrenheit);

int main(void)
{
    double fahrenheit;
    for (fahrenheit = 1; fahrenheit < 10; fahrenheit++)
    {
        printf("Fahrenheit: %.2lf -> Celsius: %.2lf\n", fahrenheit, fahrenheit_to_celsius(fahrenheit));
    }

    return 0;
}

double fahrenheit_to_celsius(double fahrenheit)
{
    double celsius = (5.0 / 9.0) * (fahrenheit - 32);
    return celsius;
}
