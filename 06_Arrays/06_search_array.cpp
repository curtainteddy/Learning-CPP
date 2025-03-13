#include <iostream>

int searchArray(int array[], int sizeofArray, int searchElement);
int searchStringArray(std::string array[], int sizeofArray, std::string searchElement);

int main()
{

    // Searching in integer array
    int numbers[] = {1, 2, 3, 4, 5};
    int sizeofNumbers = sizeof(numbers) / sizeof(numbers[0]);

    int index; // To store the index of the element to be searched.
    int searchElement;

    std::cout << "Enter the element to search: ";
    std::cin >> searchElement;

    index = searchArray(numbers, sizeofNumbers, searchElement);

    if (index != -1)
    {
        std::cout << "Element found at index: " << index << '\n';
    }
    else
    {
        std::cout << "Element not found." << '\n';
    }

    std::cin.ignore();

    // Searching in string array
    std::string foods[] = {"apple", "banana", "mango", "orange", "grapes"};
    int sizeofFoods = sizeof(foods) / sizeof(foods[0]);

    int indexFood; // To store the index of the element to be searched.
    std::string searchElementFood;

    std::cout << "Enter the element to search: " << '\n';
    std::getline(std::cin, searchElementFood);

    indexFood = searchStringArray(foods, sizeofFoods, searchElementFood);

    if (indexFood != -1)
    {
        std::cout << "Element found at index: " << indexFood << '\n';
    }
    else
    {
        std::cout << "Element not found." << '\n';
    }

    return 0;
}

int searchArray(int array[], int sizeofArray, int searchElement)
{
    for (int i = 0; i < sizeofArray; i++)
    {
        if (array[i] == searchElement)
        {
            return i;
        }
    }
    return -1; // -1 generally means the element is not found.
}

int searchStringArray(std::string array[], int sizeofArray, std::string searchElement)
{
    for (int i = 0; i < sizeofArray; i++)
    {
        if (array[i] == searchElement)
        {
            return i;
        }
    }
    return -1; // -1 generally means the element is not found.
}