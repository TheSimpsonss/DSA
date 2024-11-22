#include <iostream>
using namespace std;

int main()
{

    int n = 5; // normal integer variable

    // k is a reference variable referring to n
    int &k = n; // nickname given to n

    // c is a reference variable referring to n
    int &c = n; // nickname given to n

    cout << "n: " << n << endl;
    cout << "k: " << k << endl;
    cout << "c: " << c << endl;

    c++;
    cout << endl;

    cout << "n: " << n << endl;
    cout << "k: " << k << endl;
    cout << "c: " << c << endl;
    return 0;
}