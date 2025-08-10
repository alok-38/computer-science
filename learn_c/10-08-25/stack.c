#include <stdio.h>

void change_value(int nb);

int main(void) {
    int nb;
    nb = 42;
    change_value(nb);
    printf("%d\n", nb);
}

void change_value(int nb) {
    nb = 1337;
}

