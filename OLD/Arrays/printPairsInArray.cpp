#include <iostream>
using namespace std;

void printPairs(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "{" << arr[i] << "," << arr[j] << "}" << endl;
        }
        cout << endl;
    }
}

int main()
{

    int arr[3] = {10, 20, 30};
    int n = 3;

    printPairs(arr, n);
    return 0;
}