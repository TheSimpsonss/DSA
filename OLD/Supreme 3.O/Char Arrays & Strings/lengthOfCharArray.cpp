#include <iostream>
using namespace std;

int lengthCharArray(char arr[], int n)
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

int main()
{

    char arr[100];
    int n = 100;

    cin.getline(arr, 100, '\n');

    int length = lengthCharArray(arr, n);

    cout << "Length of char array: " << length << endl;
    return 0;
}