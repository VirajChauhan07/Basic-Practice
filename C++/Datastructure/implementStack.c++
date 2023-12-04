#include <bits/stdc++.h>
using namespace std;

int Stack[100], n = 100, top = -1;

void push(int val)
{
    if (top >= n - 1)
    {
        cout << "Stack is Overflow" << endl;
    }
    else
    {
        top++;
        Stack[top] = val;
    }
}

void pop()
{
    if (top <= -1)
    {
        cout << "Stack is underFlow" << endl;
    }
    else
    {
        cout << "The Popped Element is " << Stack[top] << endl;
        top--;
    }
}

void display()
{
    if (top >= 0)
    {
        cout << "Stack Element are ";
        for (int i = top; i >= 0; i--)
        {
            cout << Stack[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Stack is Empty";
    }
}

int main()
{
    int ch, val;

    cout << "1.) Push in stack " << endl;
    cout << "2.) Pop in stack " << endl;
    cout << "3.) Display stack " << endl;
    cout << "4.) Exit " << endl;

    do
    {
        cout << "Enter the choice " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "Enter the value  to be pushed " << endl;
            cin >> val;
            push(val);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            cout << "exit" << endl;
            break;
        }
        default:
        {
            cout << "Invalid Choice" << endl;
        }
        }
    } while (ch != 4);

    return 0;
}