#include <iostream>

int main()
{
    // Multidimensional arrays are arrays of arrays defined with two square brackets.
    // array[rows][columns], rows aren't required but columns are.

    std::string cars[][3] = {
        {"Chevy", "Ford", "Dodge"},
        {"BMW", "Audi", "Mercedes"},
        {"Toyota", "Honda", "Nissan"}}; // 3 rows and 3 columns

    // Accessing elements of multidimensional array needs two indexes.
    std::cout << cars[0][0] << '\n'; // Chevy
    std::cout << cars[1][1] << '\n'; // Audi
    std::cout << cars[2][2] << '\n'; // Nissan
    std::cout << '\n';

    // Using nested loops to print all elements of multidimensional array.

    int rows = sizeof(cars) / sizeof(cars[0]);
    int columns = sizeof(cars[0]) / sizeof(cars[0][0]); // We can also use sizeof(cars[0]) / sizeof(std::string)

    for (int i = 0; i < rows; i++) // Rows
    {
        for (int j = 0; j < columns; j++) // Columns
        {
            std::cout << cars[i][j] << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}