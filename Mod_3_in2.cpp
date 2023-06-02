#include <bits/stdc++.h>
using namespace std;
            //single inheritence 
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

public:
    void getdata()
    {
        // cout<<"Value of x : "<<x<<endl; value of x can't be accessed by class B, hence it is a private data member of class A. 
        cout<<"Value of y : "<<y<<endl;
        cout<<"Value of z : "<<z<<endl;
        
    }
};

int main()
{
   B b;
   b.setdata();
   b.getdata(); 
    return 0;
}
