#include <iostream>
using namespace std;

float getQuotient(float dividend, float divisor)
{
    float start = 0;
    float end = dividend;
    float mid = start + (end - start) / 2;
    float ans = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (mid * divisor == dividend)
        {
            return mid;
        }
        else if (mid * divisor < dividend)
        {
            ans = mid;
            start = mid + 0.01;
        }
        else
        {
            end = mid - 0.01;
        }
    }
    return ans;
}

int main()
{
    float divisor = 7;
    float dividend = -56;

    float ans = getQuotient(abs(dividend), abs(divisor));

    if ((divisor > 0 && dividend < 0) || (divisor < 0 && dividend > 0))
    {
        ans = 0 - ans;
    }
    cout << "Ans is: " << ans << endl;
}
