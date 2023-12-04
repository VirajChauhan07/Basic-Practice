#include <bits/stdc++.h>
using namespace std;

int largestInArray(int arr[], int size)
{

    int max = 0;
    int min = INT16_MAX;
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        else if (min > arr[i] && arr[i] != 0)
        {
            min = arr[i];
        }
    }
    return max;
}

int main()
{

    int arr[10] = {
        1,
        12,
        15,
        18,
        23,
        27,
        28,
        12,
        54,
    };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << largestInArray(arr, size);

    return 0;
}