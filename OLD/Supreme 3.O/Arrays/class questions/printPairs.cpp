#include <iostream>
using namespace std;

void printAllPairs(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
        }
        cout << endl;
    }
}

void printUniquePair(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
        }
        cout << endl;
    }
}

int main()
{
    int arr[4] = {10, 20, 30, 40};
    int size = 4;

    printUniquePair(arr, size);
    return 0;
}