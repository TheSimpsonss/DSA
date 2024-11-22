#include <iostream>
using namespace std;

int searchInNearlySortedArray(int arr[], int n, int target)
{

    int start = 0;
    int end = n - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (mid > 0 && arr[mid - 1] == target)
        {
            return mid - 1;
        }

        if (arr[mid] == target)
        {
            return mid;
        }

        if ((mid + 1) < n && arr[mid + 1] == target)
        {
            return mid + 1;
        }

        else if (arr[mid] > target)
        {
            end = mid - 2;
        }

        else if (arr[mid] < target)
        {
            start = mid - 2;
        }
    }
    return -1;
}

int main()
{
    int arr[7] = {20, 10, 30, 50, 40, 70, 60};
    int n = 7;
    int target = 30;

    int ans = searchInNearlySortedArray(arr, n, target);

    cout << "Target = " << target << " is present on the index = " << ans << endl;
}