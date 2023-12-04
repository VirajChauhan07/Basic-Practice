#include <bits/stdc++.h>
using namespace std;

void ReverseArray(int arr[], int start, int end)
{

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void reverseArray(int arr[], int start, int end)
{

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void PrintArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ReverseArray(arr, 0, n - 1);

    PrintArray(arr, size);

    reverseArray(arr, 0, n - 1);

    PrintArray(arr, size);

    return 0;
}