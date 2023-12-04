#include <bits/stdc++.h>
using namespace std;

void swap(int &n1, int &n2)
{

    int temp = n1;
    n1 = n2;
    n2 = temp;
}

void swapWithoutThird(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}


int main()
{
    int a = 1;
    int b = 2;
    cout << "Before swapping " << endl;
    cout << " a = " << a << endl;
    cout << " b = " << b << endl;
    swap(a, b);
    cout << "\n After Swapping " << endl;
    cout << " a = " << a << endl;
    cout << " b = " << b << endl;
    swapWithoutThird(a, b);
    cout << "\n After Swapping " << endl;
    cout << " a = " << a << endl;
    cout << " b = " << b << endl;
    return 0;
}
