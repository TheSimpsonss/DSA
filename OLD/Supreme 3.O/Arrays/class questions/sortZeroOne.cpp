/*
Approaches:

1. (i)count zero and one's 
   (ii)Insert them in array using
     (a) fill()
     (b) for
     (c) while

2. Using sort() function
3. Using two-pointers
*/

/*
INPUT: [0,1,1,0,1]
OUTPUT: [0,0,1,1,1]
*/

#include <bits/stdc++.h>
using namespace std;

void sortZeroOne(int arr[], int size)
{

    int countZero = 0;
    int countOne = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            countZero++;
        }

        else if (arr[i] == 1)
        {
            countOne++;
        }
    }


    /* By fill method
    fill(arr, arr + countZero, 0);
    fill(arr + countZero, arr + size, 1);
    */


    /* With while loop
    int index = 0;

    while (countZero--)
    {
        arr[index] = 0;
        index++;
    }

    while (countOne--)
    {
        arr[index] = 1;
        index++;
    }
    */


    /* With one loop
    for (int i = 0; i < size; i++)
    {
        if (i < countZero)
        {
            arr[i] = 0;
        }

        else
        {
            arr[i] = 1;
        }
    }*/
}

int main()
{
    int arr[5] = {0, 1, 1, 0, 1};
    int size = 5;

    sortZeroOne(arr, size);

    // Print the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}