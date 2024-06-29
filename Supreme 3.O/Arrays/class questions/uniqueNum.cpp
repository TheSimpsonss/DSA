/*
INPUT: [2,7,4,2,4]
OUTPUT: 7
*/

#include <bits/stdc++.h>
using namespace std;

int uniqueNumber(int arr[], int size)
{

    // Using XOR

    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{

    int arr[5] = {2, 7, 4, 2, 4};
    int size = 5;

    int num = uniqueNumber(arr, size);

    cout << "Unique Number in the given array is: " << num;
    return 0;
}