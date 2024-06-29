/*WAP to Check Even or Odd Integers.*/

#include <iostream>
using namespace std;

void checkEvenOdd(int n)
{

    if (n % 2 == 0)
    {
        cout << "Given Integer is even";
    }
    else
    {
        cout << "Given Integer is odd";
    }
}

int main()
{
    int n = 8;
    checkEvenOdd(n);
    return 0;
}