#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(0)); // Seed the random number generator

    int bulletPosition = rand() % 6 + 1; // Randomly place the bullet
    int chamber = 1;                     // Track which chamber is being fired
    int currentPlayer = 1;

    std::cout << "Russian Roulette!\n";
    std::cout << "Take turns pulling the trigger by pressing enter.\n";

    while (true)
    {
        std::cout << "Player " << currentPlayer << "'s turn...";
        std::cin.get(); // Wait for Enter key

        if (chamber == bulletPosition)
        {
            std::cout << "Player #" << currentPlayer << " just blew his brains out. \n";
            std::cout << "Player #" << (currentPlayer == 1 ? 2 : 1) << " wins! \n";
            break;
        }
        else
        {
            std::cout << "*Click*... Chamber #" << chamber << " shot! \n";
        }

        chamber++;
        currentPlayer = (currentPlayer == 1) ? 2 : 1; // Switch players
    }

    return 0;
}
