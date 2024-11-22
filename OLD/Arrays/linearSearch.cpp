#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {

        if (arr[i] == target)
        {

            // Found
            return true;
        }
    }

    // Not found
    return false;
}

int main()
{

    // int arr[5] = {2, 4, 3, 5, 10};

    // int target = 10;
    // bool flag = 0;
    // // 1-> found
    // // 0-> not found

    // for (int i = 0; i < 5; i++)
    // {

    //     if (arr[i] == target)
    //     {
    //         flag = 1;
    //         break;
    //     }
    // }

    // if (flag == 1)
    // {
    //     cout << "Target found!" << endl;
    // }

    // else
    // {
    //     cout << "Target not found!" << endl;
    // }

    int arr[5] = {3, 6, 9, 12, 18};
    int size = 5;
    int target = 12;

    cout << linearSearch(arr, size, target);

    return 0;
}