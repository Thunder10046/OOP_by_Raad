#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> list;
    list.push_back(30);
    list.push_back(40);
    list.push_back(40);
    list.push_back(500);

    list.push_front(10);
    list.push_front(5);

    cout << "Forward Direction Display: " << endl;
    for (auto it = list.begin(); it != list.end(); it++)
    {
        cout << " " << *it << endl;
    }
    cout << endl;

    cout << "Reversed Direction Display: " << endl;
    for (auto it = list.rbegin(); it != list.rend(); it++)
    {
        cout << " " << *it << endl;
    }
    cout << endl;

    cout << "Front Element: " << list.front() << endl;
    cout << "Back Element: " << list.back() << endl;

    list.pop_front();
    list.pop_back();

    cout << "Insert Element you are looking for: " << endl;
    int x, pos;
    cin >> x;
    std::list<int>::iterator it;
    it = find(list.begin(), list.end(), x);
    if (it != list.end())
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Didn't find" << endl;
    }
    std::list<int>::iterator p;

    cout << "insert a new element x before an existing element y" << endl;

    p = find(list.begin(), list.end(), 30);
    list.insert(p, 22);
    if (p == list.end())
        cout << "Not found" << endl;
    else
        cout << "Found address=" << &p << endl;

    for (auto it = list.begin(); it != list.end(); it++)
    {
        cout << " " << *it << endl;
    }

    cout << "insert a new element x after an existing element y " << endl;
    p = find(list.begin(), list.end(), 30);
    advance(p, 1);
    list.insert(p, 26);
    if (p == list.end())
        cout << "Not found" << endl;
    else
        cout << "Found address=" << &p << endl;

    for (auto it = list.begin(); it != list.end(); it++)
    {
        cout << " " << *it << endl;
    }

    int c;
    c = count(list.begin(), list.end(), 20);
    cout << "Count of 20 is : " << c << endl;

    cout << "This section is to erase specified element: " << endl;
    cout << "Enter element to erase: " << endl;
    int y;
    cin >> y;
    p = find(list.begin(), list.end(), y);
    if (p == list.end())
        cout << "Not found" << endl;
    else
    {
        cout << "Found address=" << &p << endl;
        list.erase(p);
    }
    std::list<int>::iterator q;
    p = list.begin();
    q = list.end();
    advance(q, 1);
    list.erase(p, q);

    list.remove(22);

    cout << "Assign" << endl;
    std::list<int> br;
    br.assign(70, 700);
    br.assign(list.begin(), list.end());
    for (auto it = list.begin(); it != list.end(); it++)
    {
        cout << " " << *it << endl;
    }
    int myints[] = {1776, 7};
    br.assign(myints, myints + 2);
    for (auto it = list.begin(); it != list.end(); it++)
    {
        cout << " " << *it;
    }

    cout << "\nUnique value deletion" << endl;
    list.sort();
    list.unique();
    for (auto it = list.begin(); it != list.end(); it++)
    {
        cout << " " << *it;
    }
}