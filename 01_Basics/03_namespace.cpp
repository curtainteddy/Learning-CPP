#include <iostream>

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{
    using namespace std; // Don't need to use std:: before cout and endl. However this is bad, because it can cause name conflicts

    using std::cout; // Only cout is available without std::
    using std::endl; // Only endl is available without std::
    /*But we aren't going to use them*/

    using namespace first; // Changes the default namespace to first but doesn't affect the global namespace
    /*
    Namespace provides a solution for preventing name conflicts in large projects.
    Each entity needs a unique name.

    A namespace allows for identically named entities as long as the namespaces are different.
    */

    int x = 0; // Each entity needs a unique name
    // int x = 10; // Can't assign same name to another entity

    std::cout << x << std::endl;
    // If no namespace is explicitly stated, then the compiler uses the local version of the entity.

    // To access the global version of the entity, use the scope resolution operator ::
    std::cout << first::x << std::endl;  // Using first namespace
    std::cout << second::x << std::endl; // Using second namespace

    std::cout << x << std::endl; // Uses local namespace if it exists even if default namespace is changed
    return 0;
}