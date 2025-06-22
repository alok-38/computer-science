#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20];
    char str2[] = "Hello";

    strcpy(str1, str2);
    printf("str1: %s\n", str1);

    strcat(str1, " world!");
    printf("After concatenation: %s\n", str1);

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);

    // Remove newline character from fgets input
    size_t len = strlen(str1);
    if (len > 0 && str1[len - 1] == '\n') {
        str1[len - 1] = '\0';
    }

    printf("You entered: %s\n", str1);

    return 0;
}

