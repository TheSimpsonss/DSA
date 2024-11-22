#include <iostream>
#include <limits.h>
using namespace std;

int MaxNumArray(int arr[], int n)
{

    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main()
{

    int arr[5] = {3, 4, 5, 2, 1};
    int n = 5;

    cout << "Maximum number in the given array: " << MaxNumArray(arr, n);
    return 0;
}