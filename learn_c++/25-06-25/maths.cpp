#include <iostream>
#include <cmath>
#include <cmath>

int main() {
    double num = 9.0;

    std::cout << "Square root: " << sqrt(num) << std::endl;
    std::cout << "Power: " << pow(2, 3) << std::endl;
    std::cout << "Sine of PI/2: " << sin(M_PI / 2) << std::endl;
    std::cout << "Log of e: " << log(exp(1)) << std::endl;

    double angle_deg = 90.0;
    double angle_rad = angle_deg * M_PI / 180.0;  // Convert to radians

    std::cout << "sin(90°) = " << sin(angle_rad) << std::endl;
    std::cout << "cos(90°) = " << cos(angle_rad) << std::endl;
    std::cout << "tan(90°) = " << tan(angle_rad) << std::endl;

    return 0;
}

