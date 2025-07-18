#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct
{
    int items[MAX];
    int top;
} Stack;

// Initialize stack, nothing inside yet
void init(Stack *s)
{
    s->top = -1;
}

// Check if the stack is full
int isFull(Stack *s)
{
    return s->top == MAX - 1;
}

int main(void)
{
    Stack myStack;
    init(&myStack);

    printf("Top index is %d\n", myStack.top);
}