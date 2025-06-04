#include <stdio.h>

int main(void) {
    int number, right_digit, reversed = 0;

    // Step 1: Read user input
    printf("Enter your number:\n");
    scanf("%d", &number);

    // Step 2: Reverse the number
    int temp = number;
    do {
        right_digit = temp % 10;
        reversed = reversed * 10 + right_digit;
        temp /= 10;
    } while (temp != 0);

    // Step 3: Re-reverse the reversed number to get back the original
    int re_reversed = 0;
    temp = reversed;
    do {
        right_digit = temp % 10;
        re_reversed = re_reversed * 10 + right_digit;
        temp /= 10;
    } while (temp != 0);

    // Step 4: Reverse again to prepare for left-to-right digit printing
    int print_order = 0;
    temp = re_reversed;
    do {
        right_digit = temp % 10;
        print_order = print_order * 10 + right_digit;
        temp /= 10;
    } while (temp != 0);

    // Step 5: Print each digit in word form
    printf("Digits in words: ");
    temp = print_order;
    do {
        right_digit = temp % 10;

        switch (right_digit) {
            case 0: printf("Zero "); break;
            case 1: printf("One "); break;
            case 2: printf("Two "); break;
            case 3: printf("Three "); break;
            case 4: printf("Four "); break;
            case 5: printf("Five "); break;
            case 6: printf("Six "); break;
            case 7: printf("Seven "); break;
            case 8: printf("Eight "); break;
            case 9: printf("Nine "); break;
        }

        temp /= 10;
    } while (temp != 0);

    printf("\n");
    return 0;
}

