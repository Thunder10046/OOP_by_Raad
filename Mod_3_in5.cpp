#include <bits/stdc++.h>
using namespace std;
                //heirarchical inheritence 
class A
{

private:
    int x;

protected:
    int y;

public:
    int z;

    void setdata()
    {
        // cout << "Enter value of x: " << endl;
        // cin >> x;
        cout << "Enter value of y: " << endl;
        cin >> y;
        cout << "Enter value of z: " << endl;
        cin >> z;
    }
};

class B : public A{
public: 
void getdata()
    {
        // cout<<"Value of x : "<<x<<endl;  
        cout<<"Value of y : "<<y<<endl;
        cout<<"Value of z : "<<z<<endl;
        
    }

};


class C : public A{

public:
    void getdata()
    {
        // cout<<"Value of x : "<<x<<endl; 
        cout<<"Value of y : "<<y<<endl;
        cout<<"Value of z : "<<z<<endl;
        
    }
};

int main()
{
   B b;
   C c;
   b.setdata();
   b.getdata();
   c.setdata();
   c.getdata(); 
    return 0;
}
