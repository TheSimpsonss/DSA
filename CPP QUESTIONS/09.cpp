/*WAP to check if a given year is a leap year*/

#include <iostream>
using namespace std;

bool checkLeapYear(int year)
{

    int flag = 0;
    if ((year % 4 == 0 && year % !100 == 0) || year % 400 == 0)
    {
        flag = 1;
    }

    else
    {
        flag;
    }
    return flag;
}

int main()
{
    int year = 1994;
    int ans = checkLeapYear(year);

    cout << ans;
    return 0;
}