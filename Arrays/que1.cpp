// arr -> {23,-7,12,-10,-11,40,60}
// Output: {-7,-10,-11,23,12,40,60 }
// Place -ve numbers on the left side.
// Place +ve numbers on the right side.

#include <iostream>
using namespace std;

void placeNum(int arr[], int n)
{
    int j = 0;
    for (int index = 0; index < n; index++)
    {

        if (arr[index] < 0)
        {
            swap(arr[index], arr[j]);
            j++;
        }
    }
}

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[7] = {23, -7, 12, -10, -11, 40, 60};
    int n = 7;

    placeNum(arr, n);
    printArray(arr, n);
    return 0;
}