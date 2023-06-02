#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    virtual void Print()
    {
        cout << "Inside Print() of class A" << endl;
    }
};

class B : public A
{
public:
    void Print()
    {
        cout << "Inside Print() of class B" << endl;
    }
};

int main()
{
    A a; 
    A *pa; 
    pa = &a;
    pa->Print();
    B b; 
    pa = &b;
    pa->Print();
    
}