#include <iostream>

double getTotal(double marks[], int sizeofMarks);

int main()
{
    double marks[] = {90.5, 80.5, 70.5, 60.5, 50.5};

    int sizeofMarks = sizeof(marks) / sizeof(double);

    double total = getTotal(marks, sizeofMarks);

    std::cout << "Total marks: " << total << '\n';
    return 0;
}

double getTotal(double marks[], int sizeofMarks)
{
    double totalMarks = 0;

    // When we pass an array to a function, it decays into a pointer.
    // That's why we need to pass the size of array as a separate argument.

    // for (int i = 0; i < sizeof(marks) / sizeof(double); i++)
    // {
    //     totalMarks += marks[i];
    // }

    for (int i = 0; i < sizeofMarks; i++)
    {
        totalMarks += marks[i];
    }

    return totalMarks;
}