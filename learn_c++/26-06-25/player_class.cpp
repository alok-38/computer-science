#include <iostream> // Add this for std::cout and std::endl

class Player
{
public:
    int health;
    float x, y;
    float speed;

    void move(float dx, float dy)
    {
        x += dx * speed;
        y += dy * speed;
    }

    void takeDamage(int damage)
    {
        health -= damage;
        if (health <= 0)
        {
            die();
        }
    }

private:
    void die()
    {
        std::cout << "Player has died!" << std::endl;
    }
};

int main()
{
    Player p1;
    p1.health = 100;
    p1.x = 0.0f;
    p1.y = 0.0f;
    p1.speed = 2.0f;

    p1.move(1.0f, 0.0f);
    p1.takeDamage(30);

    return 0;
}
