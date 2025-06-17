#include <iostream>

struct Rectangle
{
    float x, y; // Top-left corner
    float width, height;

    // Check collision with another rectangle
    bool intersects(const Rectangle &other) const
    {
        return !(x + width < other.x ||       // this is left of other
                 other.x + other.width < x || // this is right of other
                 y + height < other.y ||      // this is above other
                 other.y + other.height < y); // this is below other
    }
};

int main()
{
    Rectangle player = {100, 100, 50, 50};
    Rectangle wall = {120, 120, 40, 40};

    if (player.intersects(wall))
    {
        std::cout << "Collision detected!" << std::endl;
    }
    else
    {
        std::cout << "No collision." << std::endl;
    }

    return 0;
}
