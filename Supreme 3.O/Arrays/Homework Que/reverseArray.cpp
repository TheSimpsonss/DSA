/*
Input: 10 20 30 40 50
Output: 50 40 30 20 10

*/

#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{

    int i = 0;
    int j = size - 1;

    while (i <= j)
    {

        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[6] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    reverseArray(arr, size);
    printArray(arr, size);

    return 0;
}