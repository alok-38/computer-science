#include <stdio.h>

int main() {
    char name[100];
    printf("Enter your name: ");
    // Reads full line including spaces
    fgets(name, sizeof(name), stdin);

    printf("Hello, %s", name);
    return 0;
}

