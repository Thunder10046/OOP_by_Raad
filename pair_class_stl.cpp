#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> px;
    px = make_pair(10, "Rajshahi");
    cout << px.first << endl;
    cout << px.second << endl;
    get<0>(px) = 20; // get<iterator_pos>(pair_name) = type_wise_assigning.
    cout << px.first << endl
         << endl;

    pair<int, string> bx;
    bx = make_pair(30, "Dhaka");
    cout << "Before Swapping: " << endl;
    cout << px.first << endl;
    cout << px.second << endl;
    cout << bx.first << endl;
    cout << bx.second << endl
         << endl;

    cout << "After Swapping: " << endl;
    px.swap(bx);
    cout << px.first << endl;
    cout << px.second << endl;
    cout << bx.first << endl;
    cout << bx.second << endl;
}