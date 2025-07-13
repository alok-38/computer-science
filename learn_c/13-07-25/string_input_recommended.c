#include <stdio.h>
#include <string.h>

int main(void)
{
    char sentence[100];
    // Read entire line including spaces
    fgets(sentence, 100, stdin);
    // Remove the newine if present
    sentence[strcspn(sentence, "\n")] = '\0';
    // Output the same
    printf("%s\n", sentence);
}
