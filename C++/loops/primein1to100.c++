#include <bits/stdc++.h>
using namespace std;

int PrimeNum(int n)
{
    if (n < 2)
    {
        return 0;
    }
    else
    {
        int x = n / 2;
        for (int i = 2; i < x; i++)
        // Always start loop with 2 in prime numbers
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{

    int a = 1, b = 100;

    for (int i = a; i <= b; i++)
    {
        if ((PrimeNum(i)))
        {
            cout << i << " ";
        }
    }
    return 0;
}