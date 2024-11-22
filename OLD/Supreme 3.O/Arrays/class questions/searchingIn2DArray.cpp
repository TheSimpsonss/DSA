#include <iostream>
using namespace std;

bool linearSearch(int arr[][3], int target)
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{

    int arr[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    int target = 70;

    bool ans = linearSearch(arr, target);

    cout << ans;
    return 0;
}