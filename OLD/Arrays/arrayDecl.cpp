#include <iostream>
using namespace std;

int main()
{

    // int arr[100];
    // char carr[10];
    // bool barr[200];
    // long lnum[300];
    // short snum[200];

    // cout << "Array created successfully!" << endl;

    int num = 5;

    // sizeof()
    cout << "Size of num is: " << sizeof(num) << endl;

    // address of operator(&)
    cout << "Address of num is: " << &num << endl;

    int arr[20];

    // sizeof()
    cout << "Size of arr is: " << sizeof(arr) << endl;

    // address of operator(&)
    cout << "Base address of arr is: " << &arr << endl;
    cout << "Address of arr is: " << arr << endl; // also represents base address

    return 0;
}