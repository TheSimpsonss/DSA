#include <iostream>
using namespace std;

int firstOccurenceSortedArray(int arr[], int n, int key)
{

    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        ans = mid;
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }

        else if (arr[mid] < key)
        {
            start = mid + 1;
        }

        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
    }

    return ans;
}

int main()
{

    int arr[8] = {10, 20, 30, 30, 30, 30, 40, 50};
    int n = 8;
    int key = 30;

    int ans = firstOccurenceSortedArray(arr, n, key);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    if (ans == -1)
    {
        cout << "Element not found" << endl;
    }

    else
    {
        cout << "First occurence of given key is: " << ans << endl;
    }

    return 0;
}