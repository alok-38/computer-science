#include <iostream>
#include <cmath> // For std::sqrt

struct Vector3
{
    float x, y, z;

    // Component-wise addition
    Vector3 operator+(const Vector3 &other) const
    {
        return {x + other.x, y + other.y, z + other.z};
    }

    // Component-wise subtraction
    Vector3 operator-(const Vector3 &other) const
    {
        return {x - other.x, y - other.y, z - other.z};
    }

    // Component-wise multiplication
    Vector3 operator*(const Vector3 &other) const
    {
        return {x * other.x, y * other.y, z * other.z};
    }

    // Scalar multiplication
    Vector3 operator*(float scalar) const
    {
        return {x * scalar, y * scalar, z * scalar};
    }

    // Vector length (magnitude)
    float length() const
    {
        return std::sqrt(x * x + y * y + z * z);
    }

    void print() const
    {
        std::cout << "(" << x << ", " << y << ", " << z << ")\n";
    }
};

int main()
{
    Vector3 a = {1.0f, 2.0f, 3.0f};
    Vector3 b = {4.0f, 5.0f, 6.0f};

    Vector3 sum = a + b;       // Component-wise addition
    Vector3 diff = a - b;      // Component-wise subtraction
    Vector3 product = a * b;   // Component-wise multiplication
    Vector3 scaled = a * 2.0f; // Scalar multiplication

    std::cout << "a + b = ";
    sum.print();
    std::cout << "a - b = ";
    diff.print();
    std::cout << "a * b = ";
    product.print();
    std::cout << "a * 2 = ";
    scaled.print();

    float len = a.length();
    std::cout << "Length of a = " << len << std::endl;

    return 0;
}
