#include <iostream>
#include <array>

int main() {
    std::array<int, 5> fixedArr = {1, 2, 3, 4, 5};

    for (auto val : fixedArr) {
        std::cout << val << ' ' << std::endl;
    }
}
