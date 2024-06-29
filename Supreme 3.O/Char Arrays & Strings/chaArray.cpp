#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // creation of char array

    // char arr[8];
    char brr[100];

    // cout << "Enter your name: " << endl;
    // cin >> arr;
    // cout << "Your name is: " << arr << endl;

    // use getline function
    cout << "Enter your full name: ";
    // cin.getline(brr, 8);

    // use delimeter

    cin.getline(brr, 100, '\n');
    cout << "Your name is: " << brr << endl;

    return 0;
}