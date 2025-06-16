#include <iostream>
#include <vector>
#include <algorithm>

// A constexpr function (evaluated at compile time if possible)
constexpr int square(int x) {
    return x * x;
}

// A modern C++ function using auto and range-based for loop
auto sum_of_squares(const std::vector<int>& numbers) -> int {
    int sum = 0;
    for (auto n : numbers) {
        sum += square(n);
    }
    return sum;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4};
    std::cout << "Sum of squares: " << sum_of_squares(nums) << '\n';
    return 0;
}


