#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[] = "Hello";
    char str2[10] = "World";

    strcat(str1, str2);
    std::cout << str1 << std::endl;
}

