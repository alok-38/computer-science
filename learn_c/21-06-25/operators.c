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

    // Bitwise Operators
    printf("Bitwise AND: %d & %d = %d\n", a, b, a & b);
    printf("Bitwise OR: %d | %d = %d\n", a, b, a | b);
    printf("Bitwise XOR: %d ^ %d = %d\n", a, b, a ^ b);
    printf("Bitwise NOT: ~%d = %d\n", a, ~a);
    printf("Left shift: %d << 1 = %d\n", a, a << 1);
    printf("Right shift: %d >> 1 = %d\n", a, a >> 1);

    // Assignment Operators
    int c = a; // Copy a into c
    c += b;    // c = c + b
    printf("c += b: %d\n", c);

    c = a;  // Reset c
    c -= b; // c = c - b
    printf("c -= b: %d\n", c);

    c = a;  // Reset c
    c *= b; // c = c * b
    printf("c *= b: %d\n", c);

    c = a;  // Reset c
    c /= b; // c = c / b
    printf("c /= b: %d\n", c);

    c = a;  // Reset c
    c %= b; // c = c % b
    printf("c %%= b: %d\n", c);

    c = a;  // Reset c
    c &= b; // c = c & b
    printf("c &= b: %d\n", c);

    c = a;  // Reset c
    c |= b; // c = c | b
    printf("c |= b: %d\n", c);

    c = a;  // Reset c
    c ^= b; // c = c ^ b
    printf("c ^= b: %d\n", c);

    c = a;   // Reset c
    c <<= 1; // c = c << 1
    printf("c <<= 1: %d\n", c);

    c = a;   // Reset c
    c >>= 1; // c = c >> 1
    printf("c >>= 1: %d\n", c);
}
