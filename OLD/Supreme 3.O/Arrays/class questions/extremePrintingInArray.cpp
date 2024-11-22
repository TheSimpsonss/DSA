/*
Input: 10 20 30 40 50 60
Output: 10 60 20 50 30 40

Input: 10 20 30 40 50 60 70
Output: 10 70 20 60 30 50 40
*/

#include <iostream>
using namespace std;

void extremePrint(int arr[], int size)
{

    int i = 0;
    int j = size - 1;

    while (i <= j)
    {

        if (i == j)
        {
            cout << arr[i] << " ";
        }
        else
        {
            cout << arr[i] << " ";
            cout << arr[j] << " ";
        }
        i++;
        j--;
    }
}

int main()
{

    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;

    extremePrint(arr, size);
    return 0;
}