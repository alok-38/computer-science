#include <cstdio>
using namespace std;

// Function declaration
void nothing();
char charFunc();

int main()
{
    nothing(); // Call the function
    printf("Returned: %c\n", charFunc());
}

// Function definition
void nothing()
{
    puts("Eat Pizza"); // Print output
}

char charFunc()
{
    return '#';
}