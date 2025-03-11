#include <iostream>

int main()
{

    srand(time(0)); // Returns the current time as the number of seconds since January 1, 1970 (Unix Epoch).

    int guess;
    int attempts = 0;
    int randomNumber = rand() % 1000 + 1; // Generate a random number between 1 and 5.

    do
    {
        std::cout << "Guess a number between 1 and 1000: ";
        std::cin >> guess;
        attempts++;

        if (guess > randomNumber)
        {
            std::cout << "You're way up." << '\n';
        }
        else if (guess < randomNumber)
        {
            std::cout << "You're way down." << '\n';
        }
        else
        {
            std::cout << "That was correct! Right answer was: " << randomNumber << '\n';
            std::cout << "Total Attempts: #" << attempts << '\n';
        }
    } while (guess != randomNumber);

    return 0;
}