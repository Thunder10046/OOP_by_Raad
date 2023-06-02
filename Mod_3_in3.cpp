#include <bits/stdc++.h>
using namespace std;
        //multi-level inheritence 
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
        cout << "Enter value of x: " << endl;
        cin >> x;
        cout << "Enter value of y: " << endl;
        cin >> y;
        cout << "Enter value of z: " << endl;
        cin >> z;
    }
};

class B : public A{

};


class C : public B{

public:
    void getdata()
    {
        // cout<<"Value of x : "<<x<<endl; value of x can't be accessed by class C, hence it is a private data member of class A. 
        cout<<"Value of y : "<<y<<endl;
        cout<<"Value of z : "<<z<<endl;
        
    }
};

int main()
{
   C c;
   c.setdata();
   c.getdata(); 
    return 0;
}
