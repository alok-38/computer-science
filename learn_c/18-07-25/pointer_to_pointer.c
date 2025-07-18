#include <stdio.h>

int main(void) {
    int x = 5;
    int *pointer_to_x = &x;
    int **pointer_to_pointer = &pointer_to_x;
    printf("%d\n", **pointer_to_pointer);
}