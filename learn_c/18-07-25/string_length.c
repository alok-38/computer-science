#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[] = "Alice";
    printf("Length of \"%s\" is %zu\n", name, strlen(name));

    char source[] = "Hello";
    char destination[10];

    // Safe string copy using strncpy
    strncpy(destination, source, sizeof(destination) - 1);

    // Ensure null termination
    destination[sizeof(destination) - 1] = '\0';

    printf("Copied string: %s\n", destination);

    return 0;
}
