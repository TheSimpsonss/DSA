#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {0, 0, 1, 0, 1};

    int countZero = 0;
    int countOne = 0;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == 0)
        {
            countZero += 1;
        }

        else if (arr[i] == 1)
        {
            countOne += 1;
        }
    }

    cout << "Zero's in the given array: " << countZero << endl;
    cout << "One's in the given array: " << countOne << endl;

    return 0;
}