#include <stdio.h>
#include <stdbool.h>

int main() {
    int a = 2147483640;
    int b = 100;
    int result;

    if (__builtin_add_overflow(a, b, &result)) {
        printf("Overflow detected!\n");
    } else {
        printf("Result: %d\n", result);
    }

    return 0;
}

