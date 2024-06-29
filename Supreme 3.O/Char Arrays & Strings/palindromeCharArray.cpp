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

bool palindromeCharArray(char arr[], int size)
{

    size = getLength(arr);

    int i = 0;
    int j = size - 1;

    while (i < j)
    {

        if (arr[i] != arr[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{

    char arr[100];

    cin.getline(arr, 100);

    bool ans = palindromeCharArray(arr, 100);

    cout << "String is palindrome(1) or not palindrome(0): " << ans;
    return 0;
}