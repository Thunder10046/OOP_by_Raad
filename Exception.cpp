#include <bits/stdc++.h>
#include <stdexcept>
using namespace std;

int main()
{
    int i;
    int ax[5] = {10, 20, 60, 40, 30};
    cout << "enter index:";
    cin >> i;
    try
    {
        if (i>=0 && i<=4)
        {
            throw i; 
        }
        else if (i<0 || i>4)
        {
            throw ("Out of Range!");
        }
         cout<<"ax["<<i<<"]="<<ax[i]<<endl;
    }
    catch (int n)
    {
        cout<<"i is Caught. The value entered is "<<i<<endl;
    }
    catch(char const*ex)
    {
        cout<<ex<<endl;
    }
    catch(...)
    {
        cout<<"Default Exception"<<endl; // Exeption is a very important tool for c++
    }
}
