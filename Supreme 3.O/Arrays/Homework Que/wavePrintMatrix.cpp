#include <iostream>
#include <vector>

using namespace std;

/*

// Column-wise

Input: {{1,2,3},{4,5,6},{7,8,9}}

Output: 1 4 7 8 5 2 3 6 9

// Row-wise

Input: {{2,3,4},{5,6,7},{8,9,10}}

Output: 2 3 4 7 6 5 8 9 10
*/

vector<int> waveMatrixColWise(vector<vector<int>> arr, int rowSize, int colSize)
{

    for (int col = 0; col < colSize; col++)
    {

        // even col-> Top to bottom

        if (col % 2 == 0)
        {
            for (int i = 0; i < rowSize; i++)
            {
                cout << arr[i][col] << " ";
            }
        }

        else
        {

            // odd col-> Bottom to top

            for (int i = rowSize - 1; i >= 0; i--)
            {

                cout << arr[i][col] << " ";
            }
        }
    }
}

vector<int> waveMatrixRowWise(vector<vector<int>> arr, int rowSize, int colSize)
{

    for (int row = 0; row < rowSize; row++)
    {

        // even row-> Left to right

        if (row % 2 == 0)
        {
            for (int j = 0; j < colSize; j++)
            {
                cout << arr[row][j] << " ";
            }
        }

        else
        {

            // odd row-> Right to left

            for (int j = colSize - 1; j >= 0; j--)
            {

                cout << arr[row][j] << " ";
            }
        }
    }
}

int main()
{

    vector<vector<int>> arr = {{2, 3, 4}, {5, 6, 7}, {8, 9, 10}};

    int rowSize = 3;
    int colSize = rowSize;

    waveMatrixRowWise(arr, rowSize, colSize);

    return 0;
}