/*WAP to check whether a number is prime or not*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int flag = 1;
    for (int i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            flag = 0;
        }
    }

    if (flag == 1)
    {
        cout << num << " is a prime number" << endl;
    }

    else
    {
        cout << num << " is not a prime number" << endl;
    }
}