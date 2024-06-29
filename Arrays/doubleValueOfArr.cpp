#include <iostream>
using namespace std;

int main()
{

    int arr[10];

    // Take input of the array
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the value at index " << i << ": ";
        cin >> arr[i];
    }
    cout << endl;

    cout << "Array is: " << endl;
    // Print the array
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl
         << endl;
    cout << "Double value of each element in the array: " << endl;
    // double-up each value of the array

    for (int i = 0; i < 10; i++)
    {
        arr[i] = arr[i] * 2;
        cout << arr[i] << " ";
    }

    return 0;
}