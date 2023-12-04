#include <bits/stdc++.h>
using namespace std;

void reversestr(string &s)
{
    int n = s.length();

    for (int i = 0; i < n / 2; i++)
    {
        swap(s[i], s[n - i - 1]);
    }
}

void reverse(string s)
{
    for (int i = s.length() - 1; i >= 0; i--)
        cout << s[i];
}

int main()
{

    string s = "Hello";
    reversestr(s);
    cout << s;
    return 0;
}