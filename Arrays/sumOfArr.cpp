#include <iostream>
using namespace std;

int main()
{

    int arr[5];

    // Taking input in the array
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        cout << " ";
    }

    int sum = 0;
    // Calculate sum of the array

    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    cout << endl;
    cout << "Sum of the array is: " << sum << endl;
    return 0;
}