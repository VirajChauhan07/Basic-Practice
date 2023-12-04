#include <bits/stdc++.h>
using namespace std;

bool checkSortedArray(int a[], int size)
{

    if (size == 0 || size == 1)
    {
        return true;
    }

    return a[size - 1] >= a[size - 2] &&
           checkSortedArray(a, size - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (checkSortedArray(arr, size))
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }

    return 0;
}