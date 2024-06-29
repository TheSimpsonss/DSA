#include <iostream>
using namespace std;

int main()
{
    char ch[10];

    cin >> ch;

    cout << "Printing the value inside char array: " << ch << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "At index: " << i << " ";
        cout << ch[i] << endl;
    }

    char temp = ch[8];
    int value = (int)temp;
    cout << "Value of the temp:" << value;
    return 0;
}