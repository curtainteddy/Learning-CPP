#include <iostream>

int main()
{
    // Type Conversion
    int x = 10;
    int y = 5.5; // Implicit type conversion
    double z = 10.5;

    std::cout << x << std::endl; // Output will be 10
    std::cout << y << std::endl; // Output will be 5 - Because int can't store decimal values and it truncates the decimal
    std::cout << z << std::endl; // Output will be 10.5

    // Explicit type conversion by casting
    int a = 10;
    int b = 3;
    int c = a / b;
    double d = (double)a / b; // Explicit type conversion

    std::cout << c << std::endl; // Output will be 3
    std::cout << d << std::endl; // Output will be 3.33333

    char lol = 100; // ASCII value of 100 is 'd' - Implicit type conversion
    std::cout << lol << std::endl;

    int total_questions = 10;
    int correct_questions = 8;
    double percentage = (double)correct_questions / total_questions * 100;

    /* Output will be 80 only if we convert type cast to double
    else .8 of 0.8 is truncated during division */

    std::cout << percentage << std::endl;
    return 0;
}