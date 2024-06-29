#include <iostream>
using namespace std;

int powerOfTwo(int n)
{

    if (n == 0)
    {
        return 1;
    }

    int ans = 2 * powerOfTwo(n - 1);

    return ans;
}

int main()
{

    int n = 10;
    int answer = powerOfTwo(10);

    cout << answer;
    return 0;
}