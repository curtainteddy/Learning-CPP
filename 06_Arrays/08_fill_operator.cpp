#include <iostream>

int main()
{
    // We can't initialize array without defining size. So, we have to define size of array.

    // This is not practical if are initializing array with large number of elements.
    // std::string foods[10] = {"Pizza", "Pizza", "Pizza", "Pizza", "Pizza", "Pizza", "Pizza", "Pizza", "Pizza", "Pizza"};

    // fill() function is used to fill the array with the same value.
    // It takes 3 arguments: fill(beginning address, ending address, value)

    const int SIZE = 100;
    std::string foods[SIZE];
    fill(foods, foods + SIZE, "Lasagna"); // foods decays into a pointer to the first element of the array, and foods + SIZE calculates the address of the element one past the end of the array.

    // We can also fill in sections.
    fill(foods, foods + SIZE / 2, "Meatballs");
    fill(foods + SIZE / 2, foods + SIZE, "Spaghetti");

    for (std::string food : foods)
    {
        std::cout << food << '\n';
    }

    return 0;
}