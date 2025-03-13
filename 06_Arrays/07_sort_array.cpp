#include <iostream>

void sort(int array[], int sizeofArray);

int main()
{
    int array[] = {5, 3, 2, 1, 4, 9, 8, 7, 6, 0};
    int sizeofArray = sizeof(array) / sizeof(array[0]);

    std::cout << "Unsorted Array :" << '\n';
    for (int element : array)
    {
        std::cout << element << ' ';
    }

    sort(array, sizeofArray); // Sorting the array.

    std::cout << '\n';
    std::cout << "Sorted Array :" << '\n';
    for (int element : array)
    {
        std::cout << element << ' ';
    }

    return 0;
}

void sort(int array[], int sizeofArray)
{
    int temp;
    for (int i = 0; i < sizeofArray - 1; i++)
    {
        for (int j = 0; j < sizeofArray - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
