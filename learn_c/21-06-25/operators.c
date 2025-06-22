#include <stdio.h>

void doSomethingWithOperators();

int main()
{
    doSomethingWithOperators(); // Call the function
    return 0;
}

void doSomethingWithOperators()
{
    int a = 10, b = 5;
    int result;

    // Arithmetic Operators
    result = a + b;
    printf("Addition: %d + %d = %d\n", a, b, result);

    result = a - b;
    printf("Subtraction: %d - %d = %d\n", a, b, result);

    result = a * b;
    printf("Multiplication: %d * %d = %d\n", a, b, result);

    result = a / b;
    printf("Division: %d / %d = %d\n", a, b, result);

    result = a % b;
    printf("Modulus: %d %% %d = %d\n", a, b, result);

    // Relational Operators
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);

    // Logical Operators
    printf("(a > 0) && (b > 0): %d\n", (a > 0) && (b > 0));
    printf("(a < 0) || (b > 0): %d\n", (a < 0) || (b > 0));
    printf("!(a == b): %d\n", !(a == b));
}
