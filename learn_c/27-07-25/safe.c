#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[6];
    // Copy only 5 characters to leave space for null terminator
    strncpy(buffer, "abcdef", sizeof(buffer) - 1);
    // Manually add null terminator
    buffer[sizeof(buffer) - 1] = '\0';
    printf("Buffer: %s\n", buffer);
    return 0;
}

