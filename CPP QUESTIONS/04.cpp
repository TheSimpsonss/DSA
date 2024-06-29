/* WAP to swap two Numbers.*/

#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    // Swap a and b
    // swap(a, b);

    int c;
    c = a;
    a = b;
    b = c;

    cout << "a = " << a << "  b = " << b;
    return 0;
}