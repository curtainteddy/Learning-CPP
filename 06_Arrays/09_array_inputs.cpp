#include <iostream>

int main()
{
    // We can't initialize array without defining size. So, we have to define size of array.
    // But arrays are static and we can't change the size of array at runtime.

    std::string foods[5];
    int size = sizeof(foods) / sizeof(foods[0]);
    std::string temp;

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter food name #" << i + 1 << ": / [X] to exit \n";
        std::getline(std::cin, temp);
        if (temp == "x" || temp == "X") // Making a temp buffer to check if user wants to exit.
        {
            break;
        }
        else if (temp.empty()) // Ignore empty inputs
        {
            std::cout << "Invalid input! Please enter a food name.\n";
            i--; // Stay on the same index
            continue;
        }
        else
        {
            foods[i] = temp;
        }
    }

    std::cout << "You have entered these foods:\n";
    // for (std::string food : foods)
    // {
    //     std::cout << food << '\n';
    // }
    // This will print all the elements of array, but it will also print the empty elements.
    // So, we will use check for empty elements and break the loop if we encounter one.

    for (int i = 0; i < size; i++)
    {
        if (foods[i] == "")
        {
            break;
        }
        std::cout << foods[i] << '\n';
    }

    return 0;
}