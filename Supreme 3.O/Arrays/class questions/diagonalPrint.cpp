#include <iostream>
using namespace std;

void LeftDiagonalPrint(int arr[][3])
{

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << arr[i][i] << " ";
    // }

    cout << "Left diagonal of given elements is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;
}

void RightDiagonalPrint(int arr[][3])
{

    cout << "Right diagonal of given elements is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i][2 - i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[3][3] = {{10, 20, 30},
                     {40, 50, 60},
                     {70, 80, 90}};

    LeftDiagonalPrint(arr);
    cout << endl;
    RightDiagonalPrint(arr);
    return 0;
}