#include <iostream>

int main()
{
    // Size of any data type can be determined using the sizeof operator.

    char character = 'A';
    std::cout << "Size of character: " << sizeof(character) << '\n'; // 1 byte

    bool isTrue = true;
    std::cout << "Size of isTrue: " << sizeof(isTrue) << '\n'; // 1 byte

    // Size of an array is the product of the size of the data type and the number of elements in the array.

    int singleNumber = 5;
    std::cout << "Size of singleNumber: " << sizeof(singleNumber) << '\n'; // 4 bytes

    int numbers[5] = {1, 2, 3, 4, 5};
    std::cout << "Size of numbers array: " << sizeof(numbers) << '\n'; // 20 bytes (4 bytes * 5 elements)

    std::string name = "John";
    std::cout << "Size of name: " << sizeof(name) << '\n'; // 32 bytes

    std::string names[5] = {"John", "Doe", "Jane", "Doe", "Smith"};
    std::cout << "Size of names array: " << sizeof(names) << '\n'; // 160 bytes (32 bytes * 5 elements)

    // Size is same for the irrespective of the length of the string since it is a reference address to the string.

    std::string longName = "John Doe Smith";
    std::cout << "Size of longName: " << sizeof(longName) << '\n';           // 32 bytes
    std::cout << "Size of Standard String: " << sizeof(std::string) << '\n'; // 32 bytes

    // To find the number of elements in an array, we can divide the size of the array by the size of the data type.
    int elementCount = sizeof(names) / sizeof(std::string);
    std::cout << "Number of elements in names array: " << elementCount << '\n';
    return 0;
}