#include <iostream>
#include <vector>
#include <cmath> // for clarity, although not required for square here

int main() {
    std::vector<double> A = {9.0, 2.9, 3.E+25, 0.00007};

    for (size_t i = 0; i < A.size(); ++i) {
        std::cout << "element " << i
                  << " is " << A[i]
                  << ",\tits square is " << A[i] * A[i]
                  << '\n';
    }

    return 0;
}

