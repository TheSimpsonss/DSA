#include <iostream>
using namespace std;

int countZero(int arr[], int size)
{

    int countZero = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            countZero++;
        }
    }

    return countZero;
}

int countOne(int arr[], int size)
{

    int countOne = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            countOne++;
        }
    }

    return countOne;
}

int main()
{
    int arr[5] = {0, 1, 0, 1, 0};
    int size = 5;

    int zero = countZero(arr, size);
    int one = countOne(arr, size);

    cout << "Zero's in the array: " << zero << endl;
    cout << "One's in the array: " << one << endl;

    return 0;
}
