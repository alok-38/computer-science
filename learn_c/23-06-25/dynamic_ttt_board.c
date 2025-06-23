#include <stdio.h>

// Function prototype to print the current board
void printBoard(char board[]);

int main()
{
    // Initialize board with numbers 1 to 9
    char board[9] = {'1','2','3','4','5','6','7','8','9'};
    printf("Tic Tac Toe Board Positions:\n");
    printBoard(board);
}

void printBoard(char board[])
{
    printf("\n");
    printf(" %c | %c | %c \n", board[0], board[1], board[2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[3], board[4], board[5]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n\n", board[6], board[7], board[8]);
}

