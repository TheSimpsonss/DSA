#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{

    int left = 0;
    int right = size - 1;

    // while (left <= right)
    // {
    //     swap(arr[left], arr[right]);
    //     left++;
    //     right--;
    // }

    for (left; right; left <= right; left++; right--)
    {
        swap(arr[left], arr[right]);
    }
}

int main()
{

    int arr[5] = {2, 3, 1, 4, 5};
    int size = 5;

    reverseArray(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}