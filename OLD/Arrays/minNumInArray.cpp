#include <iostream>
#include <limits.h>
using namespace std;

int main()
{

    int arr[6];

    // Taking input in the array
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
        cout << " ";
    }
    cout << endl;

    // Find minimmum number in the array
    int min = INT_MAX;

    for (int i = 0; i < 6; i++)
    {

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "Minimum number in the given array: " << min << endl;
    return 0;
}