#include <iostream>

int main()
{
    // Matrix multiplication is a binary operation that produces a matrix from two matrices.
    // If A is an n × m matrix and B is an m × p matrix, the result AB of their multiplication is an n × p matrix, where n=row and m=column.
    // The number of columns in the first matrix must be equal to the number of rows in the second matrix.

    // A = 2x3 matrix - 3 Columns
    // B = 3x2 matrix - 3 Rows, So multiplication is possible.
    // A * B = 2x2 matrix - Resultant matrix

    int A[2][3] = {{1, 2, 3},
                   {4, 5, 6}};

    int B[3][2] = {{7, 8},
                   {9, 10},
                   {11, 12}};

    int C[2][2] = {};

    // Multiplying A and B
    for (int i = 0; i < 2; i++) // Rows of A is 2.
    {
        for (int j = 0; j < 2; j++) // Columns of B is 2.
        {
            for (int k = 0; k < 3; k++) // Columns of A and Rows of B is 3.
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Printing the result
    for (int i = 0; i < 2; i++) // Rows
    {
        for (int j = 0; j < 2; j++) // Columns
        {
            std::cout << C[i][j] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}