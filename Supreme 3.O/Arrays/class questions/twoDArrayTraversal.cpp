#include <iostream>
using namespace std;

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

    int arr[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};

    columnTraversal(arr);

    return 0;
}