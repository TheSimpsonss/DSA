#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
}

int main()
{

    int arr[5] = {2, 1, 3, 5, 4};
    int n = 5;
    int key = 3;

    int index = linearSearch(arr, n, key);

    cout << "Key = " << key << " found at the index " << index;
    return 0;
}