#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Add item function prototype
void add_item(char **item);

// Global variables
int *cart = NULL;
int count = 0;
int capacity = 2;

int main(void)
{

    // Allocate initial space
    cart = malloc(capacity * sizeof(int));

    add_item("Apple");
}

// Add item function
void add_item(char **item)
{
    if (count == capacity)
    {
        capacity *= 2;
        cart = realloc(cart, capacity * sizeof(int));
    }
    cart[count++] = item;
}