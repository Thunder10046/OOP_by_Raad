#include <bits/stdc++.h>
using namespace std;
// multiple inheritence
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

class B : public A
{
private:
    int p;

protected:
    int q;

public:
    int r;
    void setdata_p_q_r()
    {
        // cout << "Enter value of p: " << endl;
        // cin >> p;
        cout << "Enter value of q: " << endl;
        cin >> q;
        cout << "Enter value of r: " << endl;
        cin >> r;
    }
};

class C : public A, public B
{

public:
    void getdata()
    {
        // cout<<"Value of x : "<<x<<endl; value of x and p can't be accessed by class C, hence they are private data members of class A.
        cout << "Value of y : " << y << endl;
        cout << "Value of z : " << z << endl;
        cout << "Value of q : " << q << endl;
        cout << "Value of r : " << r << endl;
    }
};

int main()
{
    C c;
    c.setdata();
    c.setdata_p_q_r();
    c.getdata();
    return 0;
}
