#include <stdio.h>
#include <string.h>

void reverseString(char *str)
{
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++)
    {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main()
{
    char name[] = "XML"; // Mutable array
    reverseString(name); // Modify in place

    // Just print the reversed string
    printf("The reverse of XML is: %s\n", name);
    return 0;
}
