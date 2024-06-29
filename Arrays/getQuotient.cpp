/*
Input: 29/7
Output: 4
*/

#include <iostream>
using namespace std;

int getQuotient(int dividend, int divisor)
{

    int start = 0;
    int end = dividend;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (mid * divisor == dividend)
        {
            return mid;
        }

        else if (mid * divisor <= dividend)
        {
            ans = mid;
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int divisor = 7;
    int dividend = -56;

    int ans = getQuotient(abs(dividend), abs(divisor));

    if ((divisor > 0 && dividend < 0) || (divisor < 0 && dividend > 0))
    {
        ans = 0 - ans;
    }
    cout << "Ans is: " << ans << endl;
}