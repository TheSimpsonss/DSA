/*
Input: {1,2,3,4,6,7,8,9}
Output: 5

*/

#include <iostream>
using namespace std;

int missingNumberInSortedArray(int arr[], int n)
{

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int diff = arr[mid] - mid;

        if (diff == 1)
        {
            start = mid + 1;
        }

        else if (diff == 2)
        {
            ans = mid;
            end = mid - 1;
        }
    }
    return ans + 1;
}

int main()
{

    int n = 8;
    int arr[8] = {1, 2, 3, 4, 5, 7, 8, 9};
    int missingNumber = missingNumberInSortedArray(arr, n);

    cout << "Missing number in the given sorted array: " << missingNumber;
    return 0;
}
