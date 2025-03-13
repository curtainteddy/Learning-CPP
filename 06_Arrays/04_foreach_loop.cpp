#include <iostream>

int main()
{

    std::string dancers[] = {"ballet", "jazz", "tap"};

    for (int i = 0; i < sizeof(dancers) / sizeof(std::string); i++) // We can either iterate using for loop.
    {
        std::cout << dancers[i] << '\n';
    }

    for (std::string dancer : dancers) // Or we can use the foreach loop.
    {
        std::cout << dancer << '\n';
    }

    int numbers[] = {1, 2, 3, 4, 5};

    for (int number : numbers)
    {
        std::cout << number << '\n';
    }

    return 0;
}