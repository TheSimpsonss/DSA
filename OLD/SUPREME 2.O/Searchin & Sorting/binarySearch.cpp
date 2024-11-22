#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
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

    return -1;
}

int main()
{

    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int key = 80;

    int index = binarySearch(arr, n, key);

    cout << "Key found at the index: " << index;
    return 0;
}