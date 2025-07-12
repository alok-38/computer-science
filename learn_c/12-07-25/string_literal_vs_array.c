#include <stdio.h>

int main(void)
{
    // Pointer to string literal (read-only)
    char *ptr = "Hello";

    // Character array (writable)
    char arr[] = "Hello";

    printf("Before modification:\n");
    printf("ptr: %s\n", ptr);
    printf("arr: %s\n", arr);

    // Attempt to modify string literal via pointer — undefined behavior
    printf("\nAttempting to modify string literal...\n");
    ptr[0] = 'J'; // This will likely cause a crash or segmentation fault!

    // Modify character array safely
    arr[0] = 'J';
    printf("After modification:\n");
    printf("ptr: %s\n", ptr);
    printf("arr: %s\n", arr);

    return 0;
}
