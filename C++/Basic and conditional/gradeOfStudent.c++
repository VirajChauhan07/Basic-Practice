#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i;
    float mark, sum = 0, avg;

    for (i = 0; i < 5; i++)
    {
        cin >> mark;
        sum += mark;
    }
    avg = sum / 5;
    
    if (avg >= 91 && avg <= 100)
    {
        cout << "A1";
    }
    else if (avg >= 81 && avg <= 90)
    {
        cout << "A2";
    }
    else if (avg >= 71 && avg <= 80)
    {
        cout << "B1";
    }
    else if (avg >= 61 && avg <= 70)
    {
        cout << "B2";
    }
    else if (avg >= 51 && avg <= 60)
    {
        cout << "C1";
    }
    else if (avg >= 41 && avg <= 50)
    {
        cout << "C2";
    }
    else if (avg >= 33 && avg < 41)
        cout << "D";
    else if (avg >= 21 && avg < 33)
        cout << "E1";
    else if (avg >= 0 && avg < 21)
        cout << "E2";
    else
        cout << "Invalid!";
    cout << endl;
    return 0;
}