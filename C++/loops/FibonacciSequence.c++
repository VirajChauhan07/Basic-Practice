#include <bits/stdc++.h>
using namespace std;

void FibonacciSequence(int n)
{
    int a = 0;
    int b = 1;

    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << i << " ";
            continue;
        }

        if (i == 1)
        {
            cout << i << " ";
        }

        result = a + b;
        a = b;
        b = result;

        cout << result << " ";
    }
}

int main()
{

    int n;
    cin >> n;

    FibonacciSequence(n);
    return 0;
}