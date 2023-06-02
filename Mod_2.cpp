#include <bits/stdc++.h>
using namespace std;

class Test
{
private:
    int x, y;
    static int z;  

public:
    Test()
    {
        cout<<"Default Constructor"<<endl;
        x=0; 
        y=0; 
        z++;
    }

    Test(int a, int b)
    {
        cout<<"Parameterized Constructor"<<endl;
        x=a; 
        y=b; 
        z++;
        
    }

    Test(Test &w)
    {
        cout<<"Copy Constructor"<<endl;
        x=w.x; 
        y=w.y; 
        z++;
    }

    void setdata(int p, int q)
    {
        x=p, y=q ;  
        z++;
    }

    void getdata(){
        cout<<""<<x<<endl;
        cout<<""<<y<<endl;
    }

    int getx(){
        return x; 
    }

    int getz(){
        return z;
    }


};

int Test:: z =0;

int main()
{
    Test obj;
    obj.getdata();
    Test obj1;
    obj1.setdata(10,15);
    obj1.getdata();
    Test obj3=obj1;
    obj3.getdata();

    Test t1(1,2),t2(3,4),t3(5,6),t4(7,8), t5(9,10); 
    int sum = 0;
    sum = t1.getx()+ t2.getx() +t3.getx()+ t4.getx()+ t5.getx();  
    cout<<""<<sum<<endl;
    cout<<""<<t1.getz()<<endl;
    return 0;
}