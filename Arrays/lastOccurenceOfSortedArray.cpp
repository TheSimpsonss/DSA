#include <iostream>
using namespace std;

int lastOccurenceOfSortedArray(int arr[], int n, int key)
{

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {

        mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
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
    int arr[6] = {10, 20, 30, 30, 30, 40};
    int n = 6;
    int key = 30;

    int index = lastOccurenceOfSortedArray(arr, n, key);

    cout << "Last occurence of given key in the sorted array: " << index;

    return 0;
}
