#include <iostream>
using namespace std;

// Call By Value
int incrementByOne(int n)
{
    n = n + 1;
    return n;
}

// Call By Reference

void multiplyByTen(int &k)
{
    k = k * 10;
}

int main()
{
    int n = 5;

    cout << incrementByOne(n) << endl; // Prints 6

    multiplyByTen(n);

    cout << n; // Prints 50, n changes to 50
    return 0;
}