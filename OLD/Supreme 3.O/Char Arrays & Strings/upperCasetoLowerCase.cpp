#include <iostream>
using namespace std;

void upperToLower(char arr[], int size)
{

    int index = 0;

    while (arr[index] != '\0')
    {

        if (arr[index] >= 'A' && arr[index] <= 'Z')
        {
            arr[index] = arr[index] - 'A' + 'a';
        }

        index++;
    }
}

int main()
{

    char arr[100];

    cin.getline(arr, 100);

    upperToLower(arr, 100);

    cout << arr;
    return 0;
}