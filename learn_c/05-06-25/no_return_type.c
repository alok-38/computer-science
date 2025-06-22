#include <stdio.h>

void printHello(char *name);
int printGoodbye(char *name);

int main(int argc, char* argv[]) {
    printHello("Bob");
    int result = printGoodbye("Alice");
    printf("Print Goodbye returns %d\n", result);
}

void printHello(char *name) {
    printf("Hello there %s\n", name);
}

int printGoodbye(char *name) {
    printf("Goodbye %s\n", name);
    return 0;
}

