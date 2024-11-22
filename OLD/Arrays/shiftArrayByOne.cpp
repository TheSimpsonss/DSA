#include <iostream>
using namespace std;

// TASK:
// Input: {10, 20, 30, 40, 50}
// Output: {50, 10, 20, 30, 40}

void rightShiftByOne(int arr[], int n)
{
    // Step -1
    int temp = arr[n - 1];
    int i;

    // Step -2
    for (i = n - 1; i > 0; i--)
    {

        arr[i] = arr[i - 1];
    }

    // Step -3
    arr[0] = temp;
}

// TASK:
// Input: {10, 20, 30, 40, 50}
// Output: {20, 30, 40, 50, 10}

void leftShiftByOne(int arr[], int n)
{

    // Step -1
    int temp = arr[0];

    // Step -2
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }

    // Step -3
    arr[n - 1] = temp;
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;

    // Print the array
    rightShiftByOne(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}