#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string name;
    cout << "Enter your name: ";
    // cin >> name; // Take 'Shivin' only as input even if you write 'Shivin Singh' while giving input
    getline(cin, name); // Take 'Shivin Singh' as a whole input

    for (int i = 1; i <= 50; i++)
    {
        cout << i << " " << name;
        cout << endl;
    }
    return 0;
}