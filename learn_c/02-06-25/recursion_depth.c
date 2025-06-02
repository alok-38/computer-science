#include <stdio.h>

void test(int depth) {
    printf("Depth: %d\n", depth);
    test(depth + 1);
}

int main() {
    test(1);
    return 0;
}

