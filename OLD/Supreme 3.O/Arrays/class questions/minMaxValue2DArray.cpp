#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int min2DArray(vector<vector<int>> arr)
{

    int min = INT_MAX;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    return min;
}

int max2DArray(vector<vector<int>> arr)
{

    int max = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int main()
{

    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of cols: ";
    cin >> cols;

    vector<vector<int>> arr(rows, vector<int>(cols));

    // Take input in the array

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << "Enter arr [" << i << "]" << "[" << j << "]: ";
            cin >> arr[i][j];
        }

        cout << endl;
    }

    int value = max2DArray(arr);
    cout << "Maximum value in the given 2D array: " << value;
    return 0;
}