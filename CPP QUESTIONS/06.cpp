/*WAP to Find Compound Interest.*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double A, P, r, t, CI;

    cout << "Enter Principal amount: ";
    cin >> P;

    cout << "Enter rate: ";
    cin >> r;

    cout << "Enter time(in years): ";
    cin >> t;

    A = P * pow((1 + r / 100), t);
    CI = A - P;

    cout << "Compount Interest is: " << CI;
    return 0;
}