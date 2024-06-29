#include <bits/stdc++.h>
using namespace std;

void rowWiseSum(vector<vector<int>> arr)
{

    for (int i = 0; i < arr.size(); i++)
    {

        int rowSum = 0;
        cout << i + 1 << "st row sum: ";
        for (int j = 0; j < arr[i].size(); j++)
        {
            rowSum = rowSum + arr[i][j];
        }
        cout << rowSum << endl;
    }
}

void colWiseSum(vector<vector<int>> arr)
{

    for (int j = 0; j < arr.size(); j++)
    {

        int colSum = 0;
        cout << j + 1 << "st column sum: ";
        for (int i = 0; j < arr[j].size(); i++)
        {
            colSum = colSum + arr[j][i];
        }
        cout << colSum << endl;
    }
}

int main()
{

    int rows, cols;

    cout << "Enter no of rows: ";
    cin >> rows;

    cout << "Enter no of cols: ";
    cin >> cols;

    vector<vector<int>> arr(rows, vector<int>(cols));

    // Take input in the array

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter arr [" << i << "]" << "[" << j << "]: ";
            cin >> arr[i][j];
        }

        cout << endl;
    }

    colWiseSum(arr);

    return 0;
}