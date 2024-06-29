#include <iostream>
using namespace std;

int getLength(char arr[])
{

    int count = 0;
    int index = 0;

    while (arr[index] != '\0')
    {

        count++;
        index++;
    }

    return count;
}

void reverseCharArr(char arr[], int size)
{

    size = getLength(arr);
    int i = 0;
    int j = size - 1;
    while (i < j)
    {

        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{

    char arr[100];

    cin.getline(arr, 100);

    reverseCharArr(arr, 100);

    cout << "Reversed string will be: " << arr;
    return 0;
}