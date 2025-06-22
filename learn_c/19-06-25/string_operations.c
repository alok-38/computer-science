#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototypes
int stringLength(const char *str);
void reverseString(const char *str, char *reversed);
void copyString(const char *source, char *destination);
void concatStrings(const char *str1, const char *str2, char *result);
int compareStrings(const char *str1, const char *str2);

int main()
{
    char *str1, *str2;
    int maxLength = 100;

    // Dynamic memory allocation
    str1 = (char *)malloc(maxLength * sizeof(char));
    str2 = (char *)malloc(maxLength * sizeof(char));

    if (str1 == NULL || str2 == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input strings
    printf("Enter first string: ");
    fgets(str1, maxLength, stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline

    printf("Enter second string: ");
    fgets(str2, maxLength, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    // String Length
    printf("\nLength of first string: %d\n", stringLength(str1));
    printf("Length of second string: %d\n", stringLength(str2));

    // Reverse strings
    char *rev1 = (char *)malloc(maxLength * sizeof(char));
    reverseString(str1, rev1);
    printf("Reversed first string: %s\n", rev1);
    free(rev1);

    // Copy strings
    char *copy = (char *)malloc(maxLength * sizeof(char));
    copyString(str1, copy);
    printf("Copied first string: %s\n", copy);
    free(copy);

    // Concatenate strings
    char *concat = (char *)malloc((2 * maxLength) * sizeof(char));
    concatStrings(str1, str2, concat);
    printf("Concatenated string: %s\n", concat);
    free(concat);

    // Compare strings
    int cmp = compareStrings(str1, str2);
    if (cmp == 0)
        printf("Strings are equal.\n");
    else if (cmp < 0)
        printf("First string is less than second.\n");
    else
        printf("First string is greater than second.\n");

    // Free memory
    free(str1);
    free(str2);

    return 0;
}

// Calculate string length using pointer
int stringLength(const char *str)
{
    int len = 0;
    while (*str++)
        len++;
    return len;
}

// Reverse string
void reverseString(const char *str, char *reversed)
{
    int len = stringLength(str);
    for (int i = 0; i < len; i++)
        reversed[i] = str[len - 1 - i];
    reversed[len] = '\0';
}

// Copy string
void copyString(const char *source, char *destination)
{
    while (*source)
        *destination++ = *source++;
    *destination = '\0';
}

// Concatenate two strings
void concatStrings(const char *str1, const char *str2, char *result)
{
    while (*str1)
        *result++ = *str1++;
    while (*str2)
        *result++ = *str2++;
    *result = '\0';
}

// Compare two strings (similar to strcmp)
int compareStrings(const char *str1, const char *str2)
{
    while (*str1 && (*str1 == *str2))
    {
        str1++;
        str2++;
    }
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}
