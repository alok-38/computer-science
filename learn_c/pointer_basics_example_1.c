#include <stdio.h>

int main() {
    int x = 42;
    int *ptr = &x;

    printf("x: %d\n", x);       // 42
    printf("*ptr: %d\n", *ptr); // 42

    *ptr = 100;
    printf("x after change: %d\n", x); // 100

    return 0;
}

