#include <iostream>

bool isEven(int number);

int main() {
    std::cout << isEven(4) << std::endl;
    return 0;
}

bool isEven(int number) {
    return number % 2 == 0;
}

