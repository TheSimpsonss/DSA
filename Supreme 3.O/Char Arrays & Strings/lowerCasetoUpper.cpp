#include <iostream>
using namespace std;




void lowerToUpper(char arr[], int size)
{

    int index = 0;

    while (arr[index] != '\0')
    {

        if (arr[index] >= 'a' && arr[index] <= 'z')
        {
            arr[index] = arr[index] - 'a' + 'A';
        }

        index++;
    }
}

int main()
{

    char arr[100];
    int size = 100;

    cin.getline(arr, 100);

    lowerToUpper(arr, size);

    cout << arr;
    return 0;
}