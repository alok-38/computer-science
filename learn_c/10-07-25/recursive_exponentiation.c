#include <stdio.h>

int POW(int b, int e);

int main() {
    int base, exponent;
    printf("Enter base and exponent (non-negative): ");
    scanf("%d %d", &base, &exponent);

    if (exponent < 0) {
        printf("Exponent must be non-negative.\n");
        return 1;
    }

    int result = POW(base, exponent);
    printf("%d^%d = %d\n", base, exponent, result);
    return 0;
}

int POW(int b, int e) {
    if (e == 0) return 1;
    return POW(b, e - 1) * b;
}

