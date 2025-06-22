#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[20] = "Hello";
    char str2[] = "World";

    strcat(str1, str2);
    printf("Concatenated: %s\n", str1);
    printf("Length: %lu\n", strlen(str1));

    return 0;
}

