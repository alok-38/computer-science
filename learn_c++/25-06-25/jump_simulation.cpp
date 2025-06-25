#include <iostream>
#include <chrono>
#include <thread>

int main() {
    float positionY = 0.0f;     // Player's vertical position
    float velocityY = 0.0f;     // Player's vertical velocity
    const float gravity = -9.8f; // Gravity acceleration (units per second squared)
    const float jumpVelocity = 5.0f; // Initial jump velocity
    const float deltaTime = 0.016f; // Simulated frame time (~60 FPS)

    bool isJumping = false;

    std::cout << "Press Enter to jump!\n";
    std::cin.get(); // Wait for player to press Enter

    // Start jump
    velocityY = jumpVelocity;
    isJumping = true;

    while(isJumping)
    {
        // Update velocity with gravity
        velocityY += gravity * deltaTime;

        // Update position with velocity
        positionY += velocityY * deltaTime;

        // Check if player hits the ground
         if (positionY <= 0.0f) {
            positionY = 0.0f;
            velocityY = 0.0f;
            isJumping = false;
            std::cout << "Player landed.\n";
        }

         // Print position
        std::cout << "Player Y position: " << positionY << "\r";
        std::cout.flush();

        // Simulate frame delay
        std::this_thread::sleep_for(std::chrono::milliseconds(16));
    }

    std::cout << "\nJump simulation ended.\n";

    return 0;
}
