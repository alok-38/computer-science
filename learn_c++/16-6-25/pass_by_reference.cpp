#include <iostream>
#include <string>

// Pass by value: copies string, slower for large strings
void printByValue(std::string s)
{
    std::cout << s << std::endl;
}

// Pass by const reference: no copy, safe from modification
void printByReference(const std::string &s)
{
    std::cout << s << std::endl;
}

int main()
{
    std::string bigString(1000000, 'x'); // 1 million chars

    printByValue(bigString);     // Copies 1 million chars
    printByReference(bigString); // Just passes address

    return 0;
}
