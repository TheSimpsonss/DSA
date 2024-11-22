/*
Approaches:

1. using INT_MIN
2. initialize ans with arr[0]
3. using max function
*/

#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

int maxElement(int arr[], int size)
{

    // int ans = INT_MIN;
    int ans = arr[0];

    for (int i = 0; i < size; i++)
    {

        // if (arr[i] > ans)
        // {
        //     ans = arr[i];
        // }

        ans = max(ans, arr[i]);
    }
    return ans;
}

int main()
{

    int arr[5] = {2, 5, 1, 24, 19};
    int size = 5;

    int ans = maxElement(arr, size);

    cout << "Maximum element in the given array is: " << ans;
    return 0;
}