#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

void rowWisePrintArray(int arr[][3], int row, int column)
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

void colWisePrintArray(int arr[][4], int row, int column)
{
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

bool searchInArray(int arr[][4], int row, int column, int target)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int findMax(int arr[][4], int row, int column)
{

    int max = INT_MIN;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }

    return max;
}

int findMin(int arr[][4], int row, int column)
{

    int min = INT_MAX;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    return min;
}

void rowWiseSum(int arr[][4], int row, int column)
{

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < column; j++)
        {
            sum += arr[i][j];
        }
        cout << "Sum of row " << i + 1 << " :" << sum << endl;
    }
}

void colWiseSum(int arr[][4], int row, int column)
{

    for (int i = 0; i < column; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }
        cout << "Sum of column " << i + 1 << " :" << sum << endl;
    }
}

int diagonalSum(int arr[4][4], int row, int column)
{

    int sum = 0;

    for (int i = 0; i < row; i++)
    {
        sum += arr[i][i];
    }
    return sum;
}

void printDiagonals(int arr[][4], int row, int column)
{

    // In square matrix
    // First diagonal

    cout << "First diagonal: " << endl;
    for (int i = 0; i < row; i++)
    {
        cout << arr[i][i] << " ";
    }
    cout << endl
         << endl;

    cout << "Second diagonal: " << endl;
    for (int i = 0; i < row; i++)
    {
        cout << arr[i][row - i - 1] << " ";
    }
}

void transposeMatrix(int crr[][3], int row, int column)
{
    // With the help of upper triangle
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = i; j < column; j++)
    //     {
    //         swap(crr[i][j], crr[j][i]);
    //     }
    // }

    // With the help of lower triangle

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            swap(crr[i][j], crr[j][i]);
        }
    }
}

int main()
{
    // Create 2 D array
    // int arr[3][3];

    // Initialize
    // int arr[4][4] = {{-1, 2, 3, 4}, {0, 6, 7, 8}, {9, 10, 21, 12}, {13, 14, 15, 16}};

    // int row = 4;
    // int column = 4;

    // int brr[3][4] = {{10, 20, 5, 7}, {2, 4, 6, 8}, {10, 15, 15, 10}};
    // int r = 3;
    // int col = 4;

    // int crr[3][3] = {{2, 4, 6}, {8, 3, 5}, {7, 9, 1}};
    // int c = 3;

    // Take input of the array

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < column; j++)
    //     {
    //         cout << "Enter value of arr[" << i << "]" << "[" << j << "]:" << " ";
    //         cin >> arr[i][j];
    //     }
    // }

    // Invalid
    // int arr[3][] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12}};

    // Valid
    // int brr[][4] = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12}};

    // cout << "Row wise print array: " << endl;
    // rowWisePrintArray(arr, row, column);
    // cout << endl;

    // cout << "Column wise print array: " << endl;
    // colWisePrintArray(arr, row, column);
    // cout << endl;

    // cout << "Maximum Number in the array: " << findMax(arr, row, column);
    // cout << endl
    //      << endl;

    // cout << "Minimum Number in the array: " << findMin(arr, row, column);
    // cout << endl
    //      << endl;

    // cout << "Row wise sum: " << endl;
    // rowWiseSum(brr, r, col);
    // cout << endl
    //      << endl;

    // cout << "Column wise sum: " << endl;
    // colWiseSum(brr, r, col);
    // cout << endl
    //      << endl;

    // cout << "Sum of diagonal: " << diagonalSum(arr, row, column) << endl;

    // cout << endl
    //      << endl;

    // cout << "Diagonals of the given 4X4 array: " << endl;
    // printDiagonals(arr, row, column);
    // cout << endl
    //      << endl;

    // cout << "Transpose Matrix of given 3X3 array: " << endl;

    // Printing matrix before transpose
    // rowWisePrintArray(crr, r, c);
    // cout << endl;

    // // Printing transpose matrix
    // transposeMatrix(crr, r, c);
    // cout << endl;

    // // Printing matrix after transpose
    // rowWisePrintArray(crr, r, c);

    // Create a 2-D matrix with vector(dynmaic array)

    // vector<vector<int>> arr(5, vector<int>(10, 2));

    // // Print the 2-D vector

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // Jagged array -> can contain diffrent size of columns in rows

    vector<vector<int>> brr;

    vector<int> vec1(5, 1);
    vector<int> vec2(3, 2);
    vector<int> vec3(5, 0);
    vector<int> vec4(4, 3);

    brr.push_back(vec1);
    brr.push_back(vec2);
    brr.push_back(vec3);
    brr.push_back(vec4);

    // Print jagged array

    for (int i = 0; i < brr.size(); i++)
    {
        for (int j = 0; j < brr[i].size(); j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}