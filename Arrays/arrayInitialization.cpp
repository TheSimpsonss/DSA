#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    // // Array initialization

    int arr[5] = {3, 2, 4, 1, 5};

    // int brr[5] = {2, 4, 6, 8, 10};

    // int crr[5] = {1, 2}; // left 3 spaces are initialized to 0

    // // error
    // // int drr[2]={1,2,3,4};

    // // access n values of the array

    // int n = 3;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << brr[i] << " ";
    // }

    int size = 5;

    cout << "Print the array: " << endl;
    printArray(arr, size);

    return 0;
}