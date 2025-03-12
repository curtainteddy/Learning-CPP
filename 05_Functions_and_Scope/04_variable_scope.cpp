#include <iostream>

void printNumber(int myNumber);
void printAnotherNumber();
void printAnotherAnotherNumber();

int globalNumber = 5; // Global variable, but it is not recommended to use global variables since it pollutes the global namespace and aren't secure.

int main()
{
    // Local varaibles are only accessible within the function they are declared in.
    // They are destroyed when the function ends.
    // Global variables are accessible from anywhere in the code.

    int myNumber = 10;                                                     // Local variable.
    std::cout << "Displaying from local scope: " << myNumber << '\n';      // This will print 10.
    std::cout << "Displaying from global scope: " << globalNumber << '\n'; // Global variable can be accessed from anywhere in the code.
    printNumber(myNumber);
    printAnotherNumber();
    printAnotherAnotherNumber();
    return 0;
}

void printNumber(int myNumber)
{
    // This will cause an error because myNumber is not in scope, so we are passing it as an argument.
    std::cout << "Displaying after passing the value through argument: " << myNumber << '\n';
}

void printAnotherNumber()
{
    int myNumber = 20; // Local variable
    std::cout << "Displaying after passing the value through argument: " << myNumber << '\n';
}

void printAnotherAnotherNumber()
{
    // Same named variable as the global variable will resole to local variable first.
    int globalNumber = 30;
    std::cout << "Displaying from global scope: " << globalNumber << '\n';

    // However, namespace can be used to access the global variable.
    std::cout << "Displaying from global scope using namespace: " << ::globalNumber << '\n';
}