/*
Pattern
N = 5
E
DE
CDE
BCDE
ABCDE
*/
#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    ;
    cin >> n;
    for (i = 4; i >= n; i--)
    {
        char p = 'A' + i;
        for (j = 1; j <= i; j++)
        {
            cout << p;
            p--;
        }
        cout << endl;
    }
}