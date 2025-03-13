#include <iostream>

int main()
{
    std::string animals[] = {"cat", "dog", "rat"};

    for (int i = 0; i < 3; i++) // Since we are looping using static value 3, it is not a good practice.
    {
        std::cout << animals[i] << '\n';
    }

    std::string birds[] = {"crow", "sparrow", "pigeon", "parrot"};

    for (int i = 0; i < sizeof(birds) / sizeof(std::string); i++) // We can use size of the array to loop through the elements.
    {
        std::cout << birds[i] << '\n';
    }

    return 0;
}