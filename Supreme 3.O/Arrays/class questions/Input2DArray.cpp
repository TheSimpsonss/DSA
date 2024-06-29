#include <iostream>
using namespace std;

void rowWiseInput(int arr[][3])
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter arr[" << i << "]" << "[" << j << "]: ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
}

void colWiseInput(int arr[][3])
{

    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter arr[" << i << "]" << "[" << j << "]: ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
}

void rowTraversal(int arr[][3])
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void columnTraversal(int arr[][3])
{

    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{

    int arr[3][3];

    rowWiseInput(arr);
    rowTraversal(arr);
    return 0;
}