#include<bits/stdc++.h>
#include <array>
using namespace std;

int main()
{
    array<int, 6> ax{10, 60, 30, 70, 20};
    cout << "ii) 3rd Element of the array: " << ax.at(2) << endl;
    cout << "iii) 1st Element of the array: " << ax.front() << endl;
    cout << "iv) last element of the array: " << ax.back() << endl;
    ax.fill(50);
    
    if (ax.empty())
    {
        cout << "Array is empty" << endl;
    }
    else
    {
        cout << "Array is not empty" << endl;
    }
    cout << "The size of the array: " << ax.size() << endl;
    cout << "The maxsize of the array: " << ax.max_size() << endl;
    cout << "ix) Address of first element of array: " << ax.begin() << endl;
    cout << "x) Address of last element of array: " << ax.end();
}
