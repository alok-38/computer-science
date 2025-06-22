#include <stdio.h>

// Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main()
{
    int x = 10, y = 5;

    printf("x + y = %d\n", add(x, y));
    printf("x - y = %d\n", subtract(x, y));
    printf("x * y = %d\n", multiply(x, y));
    printf("x / y = %.2f\n", divide(x, y));

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0.0;
    }
    return (float)a / b;
}

