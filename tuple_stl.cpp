#include <bits/stdc++.h>
using namespace std;

int main()
{
    tuple<int, string, double> tx;
    tx = make_tuple(100, "Kamal", 3.5);
    cout << get<0>(tx) << endl;
    cout << get<1>(tx) << endl;
    cout << get<2>(tx) << endl;
    get<2>(tx) = 3.7;
    cout << get<2>(tx) << endl;

    tuple<int, string, double> bx;
    bx = make_tuple(500, "Raad", 3.80);
    cout << "Befor Swapping: " << endl;
    cout << get<0>(tx) << endl;
    cout << get<1>(tx) << endl;
    cout << get<2>(tx) << endl
         << endl;
    cout << get<0>(bx) << endl;
    cout << get<1>(bx) << endl;
    cout << get<2>(bx) << endl
         << endl;

    // swap function
    tx.swap(bx);
    cout << "After Swapping: " << endl;
    cout << get<0>(tx) << endl;
    cout << get<1>(tx) << endl;
    cout << get<2>(tx) << endl
         << endl;
    cout << get<0>(bx) << endl;
    cout << get<1>(bx) << endl;
    cout << get<2>(bx) << endl
         << endl;
}