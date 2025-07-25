#include <stdio.h>

int main(void) {
    int height;

    do {
        printf("Height: ");
        scanf("%i", &height);
    }
    while ((height <= 0) || (height > 8));

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - i; j++) {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}

