#include <iostream>

int main()
{
    // Arithmetic operators and shorthand operators
    int students = 200;
    students = students + 1; // Assignment operator -> 201
    students += 1;           // Increment operator -> 202

    students = students - 1; // Assignment operator -> 201
    students -= 1;           // Decrement operator -> 200

    students *= 2; // Multiplication operator -> 400
    students /= 2; // Division operator -> 200
    students %= 2; // Modulus operator -> 0

    students++;     // Post increment operator -> 1
    ++students;     // Pre increment operator -> 2
    students = 200; // Resetting the value

    // PEMDAS Rule
    int teachers = 20;
    teachers = teachers + ((20 - 50) * 2) * 2 / 5 + (20 ^ 2);

    std::cout << "Total number of students is " << students << std::endl;
    std::cout << "Total number of teachers is " << teachers << std::endl;
    return 0;
}
