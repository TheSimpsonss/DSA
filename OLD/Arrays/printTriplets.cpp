#include <iostream>
using namespace std;

void printTriplets(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << "{" << arr[i] << "," << arr[j] << "," << arr[k] << "}";
                cout << endl;
            }
        }
        cout << endl;
    }
}

int main()
{

    int arr[3] = {1, 2, 3};
    int n = 3;

    printTriplets(arr, n);
    return 0;
}