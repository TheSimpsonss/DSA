#include <iostream>
using namespace std;

void replaceChar(char arr[], int size)
{

    int index = 0;
    while (index < size)
    {

        if (arr[index] == '@')
        {
            arr[index] = ' ';
        }
        index++;
    }
}

int main()
{

    char arr[100];

    cin.getline(arr, 100);
    replaceChar(arr, 100);
    cout << "Replaced string will be: " << arr;
    return 0;
}