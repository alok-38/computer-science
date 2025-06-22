#include <stdio.h>

int main(void) {
    int USF = 0;
    int EUF = 0;

    printf("Enter US floor: ");
    scanf("%d", &USF);

    EUF = USF - 1;

    printf("EU floor: %d\n", EUF);

    return 0;
}

