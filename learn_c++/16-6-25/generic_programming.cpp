#include <iostream>
#include <string>

// High-level abstraction: Template function
template <typename T>
T max_value(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    std::cout << max_value(3, 7) << "\n";                              
    std::cout << max_value(3.14, 2.71) << "\n";                         
    std::cout << max_value(std::string("A"), std::string("B")) << "\n"; 
    return 0;
}
