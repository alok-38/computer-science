#include <stdio.h>

int main(void)
{
    int a = 10, b = 3;
    int sum = a + b;               // Addition
    int difference = a - b;        // Subtraction
    int product = a * b;           // Multiplication
    float quotient = (float)a / b; // Division with type casting

    printf("Sum = %i\n", sum);
    printf("Difference = %i\n", difference);
    printf("Product = %i\n", product);
    printf("Quotient = %f\n", quotient);

    typedef struct
    {
        int numerator;
        int denominator;
    } Fraction;
}
