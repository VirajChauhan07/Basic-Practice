#include <bits/stdc++.h>
using namespace std;

int SumOfEven(int n)
{
    int result = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            result += i;
        }
    }
    return result;
}

int main()
{

    int n;
    cin >> n;

    cout << SumOfEven(n);
}