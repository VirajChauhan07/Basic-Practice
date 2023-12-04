#include <bits/stdc++.h>
using namespace std;

int SumOfAllElement(int arr[], int size)
{

    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result += arr[i];
    }
    return result;
}

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << SumOfAllElement(arr, size);

    return 0;
}