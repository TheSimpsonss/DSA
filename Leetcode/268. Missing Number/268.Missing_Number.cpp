/*268. Missing Number

Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

Example 1:

Input: nums = [3,0,1]
Output: 2

Explanation:
n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.

Example 2:

Input: nums = [0,1]
Output: 2

Explanation:
n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.

Example 3:

Input: nums = [9,6,4,2,3,5,7,0,1]
Output: 8

Explanation:
n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 8 is the missing number in the range since it does not appear in nums.


Constraints:
n == nums.length
1 <= n <= 104
0 <= nums[i] <= n
All the numbers of nums are unique.

Follow up: Could you implement a solution using only O(1) extra space complexity and O(n) runtime complexity?*/

/*
Approaches:

1. Sort the array and subtract arr[i+1] from arr[i] and if it is equal to 1 then proceed further otherwise look into it.

2. find the sum of the given array and find the sum of the array of n distinct elements in the range of [0,n] by given formula for simplicity:

sum = n*(a+l)/2;

For example: arr[]={1,2,3,4,5,6,7,8};

then a = 1 , l = 8 , n = 8 then sum = 36;

and now subtract the sum of above from the sum of the given array and output will be the missing number.





*/

/*
Input: {0,1,3}
Output: 2

*/

#include <iostream>
using namespace std;

// first approach
int missingNumberFirst(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {

        if ((arr[i + 1] - arr[i]) != 1)
        {
            return (arr[i] + 1);
        }
    }
}

// Second approach

int missingNumberSecond(int arr[], int size)
{

    int sumOfarr = 0;

    for (int i = 0; i < size; i++)
    {
        sumOfarr = sumOfarr + arr[i];
    }

    int sumOfDistinctArr = 0;

    sumOfDistinctArr = (size + 1) * size / 2;

    int missingNumber = sumOfDistinctArr - sumOfarr;

    return missingNumber;
}

int main()
{

    int arr[2] = {0, 1};
    int size = 2;

    int num = missingNumberSecond(arr, size);

    cout << "Missing Number in the given array is: " << num;
    return 0;
}