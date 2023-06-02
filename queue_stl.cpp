#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> que;
    que.push(10);
    que.push(20);
    que.push(30);
    que.push(40);
    que.push(50);
    que.pop();
    cout << "Front Element: " << endl;
    cout << que.front() << endl
         << endl;
    cout << "Rear Element: " << endl;
    cout << que.back() << endl
         << endl;

    if (que.empty())
    {
        cout << "Queue is Empty!" << endl;
    }
    else
    {
        cout << "Queue can be pushed" << endl
             << endl;
    }
}