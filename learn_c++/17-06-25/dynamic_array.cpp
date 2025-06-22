#include <iostream>
#include <vector>

int main() {
    std::vector<int> dynamicArr;

    for (int i = 1; i <= 5; ++i) {
        dynamicArr.push_back(i);  // size grows dynamically
    }

    for (auto val : dynamicArr) {
        std::cout << val << ' ' << std::endl;
    }
}

