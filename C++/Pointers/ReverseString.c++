#include <bits/stdc++.h>
using namespace std;

void reversestring(char *str)
{
    int l, i;
    char *start, *end, ch;
    l = strlen(str);
    start = str;
    end = str + l - 1;

    for (int i = 0; i < (l - 1) / 2; i++)
    {

        ch = *end;
        *end = *start;
        *start = ch;

        start++;
        end--;
    }
}

void reversestr(char *str)
{
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++)
    {
        swap(str[i], str[n - i - 1]);
    }
}

int main()
{
    char s[100] = "RAMESH";
    cout << "Enter the string str " << s << endl;

    // reversestring(s);
    reversestr(s);
    cout << "Reverse String is " << s << endl;

    return 0;
}

// int main()
// {

//     string str = "GeeksforG";
//     reverse(str.begin(), str.end());

//     cout << str;
//     return 0;
// }