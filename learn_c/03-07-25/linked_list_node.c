#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = malloc(sizeof(struct Node));
    head->data = 1;
    head->next = NULL;

    printf("Node data: %d\n", head->data);

    free(head);
    return 0;
}
