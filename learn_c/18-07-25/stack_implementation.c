#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct
{
    int items[MAX];
    int top;
} Stack;

// Initialize stack
void init(Stack *s)
{
    s->top = -1;
}

// Check if the stack is full
int isFull(Stack *s)
{
    return s->top == MAX - 1;
}

// Check if the stack is empty
int isEmpty(Stack *s)
{
    return s->top == -1;
}

// Push operation
void push(Stack *s, int item)
{
    if (isFull(s))
    {
        printf("Stack Overflow\n");
        return;
    }
    s->items[++(s->top)] = item;
}

// Pop operation
int pop(Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack Underflow\n");
        return -1; // Use sentinel value or error code
    }
    return s->items[(s->top)--];
}

// Peek operation
int peek(Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is empty\n");
        return -1;
    }
    return s->items[s->top];
}

int main()
{
    Stack myStack;
    init(&myStack);

    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);

    printf("Top element is %d\n", peek(&myStack));

    printf("Popped: %d\n", pop(&myStack));
    printf("Popped: %d\n", pop(&myStack));

    pop(&myStack);

    printf("Top element after poing %d\n", peek(&myStack));

    push(&myStack, 30);

    printf("Top element after pushing %d\n", peek(&myStack));

    return 0;
}
