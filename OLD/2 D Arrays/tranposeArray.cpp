#include <iostream>
using namespace std;

void transposeArray(int arr[][3], int row, int column)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < column; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void printArray(int arr[][3], int row, int column)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3;
    int column = 3;

    transposeArray(arr, row, column);
    printArray(arr, row, column);

    return 0;
}