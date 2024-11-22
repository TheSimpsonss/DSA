#include <iostream>
using namespace std;

int findLength(int ch[], int size)
{
    int length = 0;

    for (int i = 0; i < size; i++)
    {
        if (ch[i] == '\0')
        {
            break;
        }
        else
        {
            length++;
        }
    }
    return length;
}

int main()
{

    char ch[100];
    cin >> ch;
    int size = 100;

    int length = findLength(ch, size);
    cout << "Length of given string is: " << length;
    return 0;
}