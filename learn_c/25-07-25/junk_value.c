#include <stdio.h>

int main() {
    int x;
    printf("x = %d\n", x);  // UB: uninitialized
    return 0;
}

