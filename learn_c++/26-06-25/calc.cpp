#include <iostream>
#include <string>
#include <cstdlib> // for std::atoi

int main(int argc, const char* argv[]) {
    if (argc != 4) {
        std::cout << "Usage: " << argv[0] << " <add|sub|mul|div> <num1> <num2>\n";
        return 1;
    }

    std::string operation = argv[1];
    int num1 = std::atoi(argv[2]); // Convert string to int
    int num2 = std::atoi(argv[3]);

    if (operation == "add") {
        std::cout << "Result: " << (num1 + num2) << std::endl;
    } else if (operation == "sub") {
        std::cout << "Result: " << (num1 - num2) << std::endl;
    } else if (operation == "mul") {
        std::cout << "Result: " << (num1 * num2) << std::endl;
    } else if (operation == "div") {
        if (num2 == 0) {
            std::cout << "Error: Division by zero\n";
            return 1;
        }
        std::cout << "Result: " << (num1 / num2) << std::endl;
    } else {
        std::cout << "Unknown operation: " << operation << std::endl;
        return 1;
    }

    return 0;
}

