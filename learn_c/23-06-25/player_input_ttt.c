#include <stdio.h>

// Function to print the board
void printBoard(char board[]) {
    printf("\n");
    printf(" %c | %c | %c \n", board[0], board[1], board[2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[3], board[4], board[5]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n\n", board[6], board[7], board[8]);
}

int main() {
    char board[9] = {'1','2','3','4','5','6','7','8','9'};
    int position;
    char mark;

    printBoard(board);

    printf("Enter the position (1-9) where you want to place your mark: ");
    scanf("%d", &position);

    // Check if position is valid
    if (position < 1 || position > 9) {
        printf("Invalid position!\n");
        return 1;
    }

    // Ask player for mark: X or O
    printf("Enter your mark (X or O): ");
    scanf(" %c", &mark);

    // Validate mark
    if (mark != 'X' && mark != 'O' && mark != 'x' && mark != 'o') {
        printf("Invalid mark!\n");
        return 1;
    }

    // Convert lowercase to uppercase
    if (mark >= 'a' && mark <= 'z') {
        mark = mark - 'a' + 'A';
    }

    // Update the board
    board[position - 1] = mark;

    printBoard(board);

    return 0;
}

