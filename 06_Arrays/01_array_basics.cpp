#include <iostream>

int main()
{
    // Array is a data structure that can store a fixed-size sequential collection of elements of the same type.
    std::string cars[] = {"Volvo", "BMW", "Ford"};  // Can be initialized without specifying the size.
    std::string animals[3] = {"cat", "dog", "rat"}; // Can be initialized with specifying the size.
    std::string fruits[3];                          // Can be initialized without specifying the elements but need to specify the size..

    // Assigning values to an array
    fruits[0] = "Apple";
    fruits[1] = "Banana";
    fruits[2] = "Mango";

    // Accessing elements of an array
    std::cout << cars[0] << '\n';    // Volvo
    std::cout << animals[1] << '\n'; // dog
    std::cout << fruits[2] << '\n';  // mango
}