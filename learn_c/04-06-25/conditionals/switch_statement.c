#include <stdio.h>
#include <math.h>

int main(void) {
    printf("Enter an int and a float value followed by a new line.\n");

    int a = 0;
    float b = 0;

    scanf("%d", &a);
    scanf("%f", &b);

    if (a == 1) {
        printf("Integer: %d\n", a);
    } else if (fabs(b - 1.1) < 0.0001) {
        printf("Float: %f\n", b);
    } else {
        printf("It's neither!\n");
    }

    return 0;
}

