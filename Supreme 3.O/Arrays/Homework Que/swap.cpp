/*
<----- Swap two variables ----->

1. Using +,-
2. Using XOR(^)
3. Using temp
4. Using swap function

*/

#include <iostream>
#include <algorithm> // for swap function
using namespace std;

int main()
{
    int a = 4;
    int b = 3;

    // Using addition subtraction

    // a = a + b;
    // b = a - b;
    // a = a - b;

    // Using XOR

    // a = a ^ b; // a = 7
    // b = a ^ b; // b = 4
    // a = a ^ b; // a = 3

    // Using temp variable

    // int temp;

    // temp = a;
    // a = b;
    // b = temp;

    // Using swap function

    swap(a, b);

    cout << "After swap: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
