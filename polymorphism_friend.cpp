#include<bits/stdc++.h>
using namespace std; 

class A{
    private: 
    int x; 
    public: 
    A()
    {
        this->x = 500;
    }

    void Display()
    {
        cout<<"Value of x : "<<x<<endl;
    }
    friend void IncX(A &w);
    friend void DecX(A &q);
};

void IncX(A &w){
    w.x = w.x*8;
}

void DecX(A &q){
    q.x = q.x/5;
}

int main()
{
    A a; 
    a.Display();

    IncX(a);
    a.Display();

    DecX(a);
    a.Display();


}