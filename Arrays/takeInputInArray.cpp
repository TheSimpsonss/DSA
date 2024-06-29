#include <iostream>
using namespace std;

int main()
{

    int arr[5];
    int n = 5;

    // Take input in an array
    for (int i = 0; i < n; i++)
    {

        cout << "Enter the value at index " << i << ": ";
        cin >> arr[i];
    }
    cout << endl;

    // Printing the array

    cout << "Array will become: " << endl;
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }

    return 0;
}