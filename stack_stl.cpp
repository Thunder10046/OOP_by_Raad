#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> stak;
    stak.push(10);
    stak.push(20);
    stak.push(30);
    stak.push(40);
    stak.push(50);
    stak.pop();
    cout << stak.top() << endl;

    if (stak.empty())
    {
        cout << "Stack is Empty!" << endl;
    }
    else
    {
        cout << "Stack can be pushed" << endl
             << endl;
    }
}