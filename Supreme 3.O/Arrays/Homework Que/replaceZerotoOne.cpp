#include <iostream>
using namespace std;

// 1's complement
void flipZerotoOne(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = 1;
        }

        else if (arr[i] == 1)
        {
            arr[i] = 0;
        }
    }
}

void flipOnetoNegativeOne(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            arr[i] = -1;
        }
    }
}

void printArray(int arr[], int size)
{

    // Print the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {0, 1, 1, 0, 0, 1};
    int size = 6;

    flipZerotoOne(arr, size);
    printArray(arr, size);
    cout << endl;
    flipOnetoNegativeOne(arr, size);
    printArray(arr, size);

    return 0;
}