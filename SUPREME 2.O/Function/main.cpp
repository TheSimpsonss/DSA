#include <iostream>
using namespace std;

void oneToHundred()
{

    for (int i = 1; i <= 100; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int simpleInterest(int P, int R, int T)
{

    int SI = (P * R * T) / 100;

    return SI;
}

void primeNumber()
{
    int false = 0;

    for (int i = 1; i <= 100; i++)
    {
        for (int j = 1; j <= 100; j++)
        {
            if (i % j == 0)
            {
                false = 1;
            }
        }
        cout << endl;
    }

    if (false == 0)
    {
        return;
    }
    else
    {
    }
}

int main()
{

    // oneToHundred();
    // int SI = simpleInterest(5000, 5, 4);

    // cout << "Simple Interest will be: " << SI << " Rs." << endl;

    primeNumber();
    return 0;
}