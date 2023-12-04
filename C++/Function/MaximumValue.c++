#include <bits/stdc++.h>
using namespace std;

int maximumValue(int arr1[], int size)
{
    int max = 0, min = INT_MAX;
    for (int i = 0; i < size; ++i)
    {
        if (arr1[i] > max)
        {
            max = arr1[i];
        }
    }
    return max;
}

int maxValue(int arr1[], int size)
{
    int max = 0;
    sort(arr1, arr1 + size);
    for (int i = size - 1; i >= 0; i++)
    {
        max = arr1[i];
        break;
    }
    return max;
}

int main()
{

    int n;
    cin >> n;
    int arr1[n];
    int size = sizeof(arr1) / sizeof(arr1[0]);
    for (int i = 0; i < n; i++)
    {

        cin >> arr1[i];
    }

    // cout << "Maximum Value is: " << maximumValue(arr1, size);
    cout << "Maximum Value is: " << maxValue(arr1, size);

    return 0;
}