#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t; // pairlist_t is an alias for vector of pairs of string and int to make it easier to read
// // Convention to use _t at the end of the alias

// typedef std::string text_t; // Alias for string
// typedef int number_t;       // Alias for int

// Using the using keyword since it works better with templates
using text_t = std::string; // Using the using keyword to create an alias for string
using number_t = int;       // Using the using keyword to create an alias for int

int main()
{
    /*
    typedef is reserved keyword used to create an additional name
    (alias) for another data type.
    New identifier for an existing type
    Helps with readability and reduces typos
    */
    // pairlist_t pairlist; // Using the alias to declare a vector of pairs of string and int

    text_t name = "Peshal";
    number_t age = 20;

    std::cout << name << std::endl;
    std::cout << age << std::endl;
    return 0;
}