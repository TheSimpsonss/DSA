#include <iostream>
using namespace std;

int getUnique(int arr[], int size)
{

    int element = 0;

    for (int i = 0; i < size; i++)
    {
        element = element ^ arr[i];
    }
    return element;
}

int main()
{

    int arr[9] = {3, 6, 9, 3, 10, 6, 9, 13, 10};
    int size = 9;

    cout << "Unique number in the array: " << getUnique(arr, size) << endl;
    return 0;
}