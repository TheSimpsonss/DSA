/*

*
* *
*   *
*     *
*       *
* * * * * *

*/

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == (n - 1) || j == i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}