#include <iostream>
using namespace std;

// Input: 20 30 40 50 60 70
// Output: 20 70 30 60 40 50

void extremePrint(int arr[], int size)
{

    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        if (left == right)
        {
            cout << arr[left] << " ";
        }
        else
        {
            cout << arr[left] << " ";
            cout << arr[right] << " ";
            left++;
            right--;
        }
    }
}

int main()
{

    int arr[6] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    extremePrint(arr, size);
    return 0;
}