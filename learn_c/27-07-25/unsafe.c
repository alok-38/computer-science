#include <stdio.h>
#include <string.h>

int main() {
    char buffer[6];
    strncpy(buffer, "abcdef", sizeof(buffer)); // unsafe: no room for '\0'
    printf("Buffer: %s\n", buffer);
    return 0;
}

