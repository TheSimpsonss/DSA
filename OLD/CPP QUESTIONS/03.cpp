/* WAP to Print the ASCII Value of a Character.*/

#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    cout << "The ASCII value of given character is: " << (int)ch;
    return 0;
}