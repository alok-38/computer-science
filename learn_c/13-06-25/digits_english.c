#include <stdio.h>
#include <string.h>

void digit_to_english(int digit);

int main()
{
    int number;

    printf("Enter any digit/s: ");
    scanf("%d", &number);

    printf("%d = ", number);

    // If the number is negative, print "minus" and make it positive
    if (number < 0)
    {
        printf("minus ");
        number = -number;
    }

    // Extract each digit from left to right
    int digits[10], count = 0;

    if (number == 0)
    {
        digit_to_english(0);
    }
    else
    {
        while (number > 0)
        {
            digits[count++] = number % 10;
            number /= 10;
        }
        for (int i = count - 1; i >= 0; i--)
        {
            digit_to_english(digits[i]);
        }
    }

    printf("\n");

    return 0;
}

void digit_to_english(int digit)
{
    const char *digit_names[] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"};

    if (digit >= 0 && digit <= 9)
    {
        printf("%s ", digit_names[digit]);
    }
    else
    {
        printf("Invalid ");
    }
}
