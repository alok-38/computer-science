#include <stdio.h>
#include <string.h>

int main(void) {
    printf("Hello world\n");

    int x;
    printf("Enter an integer: ");
    scanf("%i", &x);
    printf("Answer: %d\n", x);

    char str[100];
    printf("What's your name? ");
    scanf("%s", str);  // Only reads up to first space
    printf("Hello %s\n", str);

    float y;
    printf("Enter a float: ");
    scanf("%f", &y);

    int j = 0;
    printf("x: %f j: %i\n", y, j);

    return 0;
}

