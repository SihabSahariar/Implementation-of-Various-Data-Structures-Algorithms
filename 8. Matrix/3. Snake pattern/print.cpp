#include <bits/stdc++.h>
using namespace std;

// global const
const int row = 4;
const int column = 4;

// Print snake pattern
void printSnake(int matrix[row][column])
{
    // logic:
    for (int i = 0; i < row; i++)
    {
        // i is even
        if (i % 2 == 0)
        {
            for (int j = 0; j < column; j++)
                cout << matrix[i][j] << " ";
            cout << "\n";
        }
        // i is odd
        else
        {
            for (int j = column - 1; j >= 0; j--)
                cout << matrix[i][j] << " ";
            cout << "\n";
        }
    }
}

// utility fn print normal matrix
void print(int matrix[row][column])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            cout << matrix[i][j] << " ";
        cout << "\n";
    }

    cout << "\n";
}

// Driver code
int main()
{
    // given matrix
    int matrix[row][column] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    // print given matrix
    cout << "Given matrix:\n";
    print(matrix);

    // fn call
    cout << "Snake Pattern:\n";
    printSnake(matrix);
}