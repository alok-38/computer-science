#include <stdio.h>
#include <string.h> // No extra '>' here

int main()
{
    int age = 25;         // Need semicolon at the end of the statement
    char name[] = "Alex"; // Use char array for strings in C
    float height = 5.9f;  // Float literals often end with 'f'

    // To print these values:
    printf("Age: %d\n", age);
    printf("Name: %s\n", name);
    printf("Height: %.1f\n", height);

    printf("Hello %s! Who is your favorite video game character? ", name);
    char videoGameCharacter[50];
    // Use fgets to read a full line including spaces
    fgets(videoGameCharacter, sizeof(videoGameCharacter), stdin);
    // fgets includes the newline character '\n' at the end, so remove it:
    size_t len = strlen(videoGameCharacter);
    if (len > 0 && videoGameCharacter[len - 1] == '\n')
    {
        videoGameCharacter[len - 1] = '\0';
    }
    printf("Your favorite character is: %s\n", videoGameCharacter);

    return 0; // main should return an int
}
