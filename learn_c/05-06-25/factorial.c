#include <stdio.h>

int factorial(int n);

int main(void) {
    int value = factorial(5);
    printf("%d! = %d\n",5, value);
    printf("%d! = %d\n", 4, factorial(4));
    return 0;
}

int factorial(int n) {
    if (n < 0) return -1; // Error case
    int return_value = 1;
    while (n > 1) {
        return_value *= n--;
    }
    return return_value;
}

