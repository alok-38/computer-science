#include <stdio.h>
#include <windows.h>

int main() {
    COORD coord = {20, 10}; // x=20, y=10
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, coord);
    printf("█"); // block character

    return 0;
}
