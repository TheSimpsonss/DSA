/*
Approaches:

1. using INT_MAX
2. initialize ans with arr[size-1]
3. using min function
*/

#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

int minElement(int arr[], int size)
{

    // int ans = INT_MAX;
    int ans = arr[size - 1];

    for (int i = 0; i < size; i++)
    {

        // if (arr[i] < ans)
        // {
        //     ans = arr[i];
        // }

        ans = min(ans, arr[i]);
    }
    return ans;
}

int main()
{
    int arr[5] = {2, -4, 10, 33, 54};
    int size = 5;

    int ans = minElement(arr, size);

    cout << "Minimum Element in the given array: " << ans;
    return 0;
}