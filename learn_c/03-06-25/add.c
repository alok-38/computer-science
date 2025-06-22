#include <stdio.h>

int add(a, b)
int a;
int b;
{
    return a + b;
}

main()
{
    int result = add(3, 4);
    printf("Result: %d\n", result);
}

