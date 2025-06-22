#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // There is nothing in the beginning
    char *name = NULL;
    size_t len = 0;

    printf("Enter your full name: ");
    // Dynamically allocates and resizes as needed
    getline(&name, &len, stdin);

    printf("Hello, %s!\n", name);
    // Always free memory you malloc
    free(name);
    return 0;
}

