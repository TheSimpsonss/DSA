/* 189. Rotate Array

Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.



Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]

Explanation:

rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]

Explanation:

rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
*/

#include <iostream>
using namespace std;

void rotateArray(int arr[], int size, int k)
{
    int ans[size];
    int index = 0;

    for (index = 0; index < size; index++)
    {
        int newIndex = (index + k) % size;
        ans[newIndex] = arr[index];
    }
    // Print rotated array
    cout << "Rotated array is: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{

    int arr[6] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    int k;
    cout << "Enter value of k to rotate array: ";
    cin >> k;

    rotateArray(arr, size, k);

    return 0;
}