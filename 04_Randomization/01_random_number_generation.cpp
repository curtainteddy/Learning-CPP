#include <iostream>
#include <cstdlib> // Standard library that has rand() and srand() functions.
#include <ctime>   // Standard library that has time() function.

int main()
{
    // Random numbers are generated using the rand() function.
    // The rand() function generates a random number between 0 and RAND_MAX (32767).
    // RAND_MAX is a constant defined in the cstdlib header file.
    // The rand() function generates a new random number each time it is called.
    // The srand() function is used to seed the random number generator.

    srand(time(NULL)); // Seed the random number generator with the current time.

    int num = rand(); // Generate a random number.
    std::cout << num << '\n';

    int dice = rand() % 6 + 1; // Generate a random number between 1 and 6.
    std::cout << dice << '\n';
    return 0;
}