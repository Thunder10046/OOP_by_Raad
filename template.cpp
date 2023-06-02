#include <bits/stdc++.h>
#include <stdexcept>
using namespace std;
template <class T>

class A
{
private:
    T x, y;

public:
    void setdata(T x, T y)
    {
        this->x = x;
        this->y = y;
    }
    T sum()
    {
        T sum = 0;
        sum = x + y;
        return sum;
    }
};

int main()
{
    A<int> obj;
    obj.setdata(50, 60);
    cout << obj.sum() << endl;

    A<float> obj1;
    obj1.setdata(50.24, 30.14);
    cout << obj1.sum();
}