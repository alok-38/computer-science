#include <stdio.h>

int main(void)
{
    FILE *file;
    // Buffer to store each line
    char line[256];

    // Open the file in read only mode
    file = fopen("Doom.txt", "r");

    // Check if file opened successfully
    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    // Read and print each line until EOF
    while (fgets(line, sizeof(line), file))
    {
        printf("%s", line);
    }

    // Close the file
    fclose(file);

    return 0;
}