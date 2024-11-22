#include <iostream>
using namespace std;

void sortZeroOne(int arr[], int n)
{
    int countZero = 0;
    int countOne = 0;

    // Count zero's and one's

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            countZero++;

        else if (arr[i] == 1)
            countOne++;
    }

    // // Place zero's and one's

    // int i;
    // for (i = 0; i < countZero; i++)
    // {
    //     arr[i] = 0;
    // }

    // for (int j = i; j < n; j++)
    // {
    //     arr[j] = 1;

    // Easy way

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
}

int main()
{
    int arr[7] = {0, 0, 1, 0, 1, 0, 1};
    int n = 7;

    cout << "Sorted array zero's and one's: " << endl;
    sortZeroOne(arr, n);

    // Print the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}