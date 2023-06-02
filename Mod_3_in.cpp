#include <bits/stdc++.h>
using namespace std;
                //topic 1
class Father
{

private:
    int money;

protected:
    int gold;

public:
    int land;

    void setdata()
    {
        cout << "Enter Money: " << endl;
        cin >> money;
        cout << "Enter Gold: " << endl;
        cin >> gold;
        cout << "Enter Land: " << endl;
        cin >> land;
    }
};

class Son : public Father
{

public:
    void getdata()
    {
        // cout << "Money: " << money << endl;

        cout << "Gold: " << gold << endl; //Money can't be accessed by Grandson, hence money is private of Father and gold can be accessed by Son, hence it is protected of Father, but can't be accessed from further derived class. 

        cout << "Land: " << land << endl;
    }
};

class Grandson : public Son
{
public:
    void getdata()
    {
        // cout << "Money: " << money << endl;

        cout << "Gold: " << gold << endl; //Money and gold can't be accessed by Grandson, hence money is private of Father and gold is protected of Father. 

        cout << "Land: " << land << endl;
    }
};

int main()
{
    Father in1;
    in1.setdata();
    Son in2; 
    in2.getdata();
    Grandson in3; 
    in3.getdata(); 
    return 0;
}
