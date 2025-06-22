#include <stdio.h>
#include <math.h>

int main(void) {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);

    if (fmod(num, 1.0) == 0.0) {
        printf("It's a whole number\n");

        if (fmod(num, 2.0) == 0.0) {
            printf("It's even\n");
        } else {
            printf("It's odd\n");
        }
    } else {
        printf("It's a fractional number\n");
    }

    return 0;
}

