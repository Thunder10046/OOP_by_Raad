#include<bits/stdc++.h>
using namespace std; 
template<typename T>

class A{
    private: 

    T x; 
    T y;

    public: 
    void setdata(T x, T y)
    {
        this->x =x; 
        this->y = y;
    }

    template<typename Tx>sum()
    {
        
        return  x+y;

    }
};

int main()
{
    A<int>a;
    a.setdata(5,10);
    cout<<a.sum()<<endl;

    A<double>b;
    b.setdata(6,1);
    cout<<b.sum()<<endl;
    
    
}