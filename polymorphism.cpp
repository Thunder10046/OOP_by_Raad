#include <bits/stdc++.h>
using namespace std;

class Test
{
public:
    // int num1, num2;
    void Sum(int num1)
    {
        cout << num1 << endl;
    }
    void Sum(int num1, int num2)
    {
        cout << num1 + num2 << endl;
    }
    void Sum(double num1, int num2)
    {
        cout << num1 + num2 << endl;
    }
    void Sum(int num1, double num2)
    {
        cout << num1 + num2 << endl;
    }
    void Sum(double num1, double num2)
    {
        cout << num1 + num2 << endl;
    }
};

int main()
{
    Test t;
    t.Sum(10);         // returns 10
    t.Sum(10, 20);     // return 30
    t.Sum(5.7, 20);    // return 25.7
    t.Sum(10, 2.6);    // return 12.6
    t.Sum(10.5, 20.7); // return 31.2
}