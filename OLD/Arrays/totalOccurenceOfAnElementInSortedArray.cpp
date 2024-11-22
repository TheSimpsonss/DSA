/*
Find Total Occurence of an element in the given array

Input: {10,20,30,30,30,30,40}
Output: 4

Approach: (Last Occurence - First Occurence )+1

(5-2)+1 = 4

*/

#include <iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key)
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

int lastOccurence(int arr[], int n, int key)
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

int totalOccurence(int arr[], int n, int key)
{
    int first = firstOccurence(arr, n, key);
    int last = lastOccurence(arr, n, key);

    int total = (last - first) + 1;

    return total;
}

int main()
{

    int arr[7] = {10, 20, 30, 30, 30, 30, 40};
    int n = 7;
    int key = 30;
    int ans = totalOccurence(arr, n, key);

    cout << "Total occurence of the given key element: " << ans << endl;
    return 0;
}
