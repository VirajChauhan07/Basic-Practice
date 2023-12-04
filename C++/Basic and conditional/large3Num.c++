#include <bits/stdc++.h>
using namespace std;

void largestThreeNumber(int arr[], int n)
{
    sort(arr, arr + n, greater<>());
    int j = 0;
    cout << "\nThree largest elements are ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            cout << arr[i] << " ";
            j++;
        }
        if (j == 3)
        {
            break;
        }
    }
}
int main()
{

    int arr[] = {15, 2, 5, 7, 9, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "this is array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    largestThreeNumber(arr, n);
    return 0;
}