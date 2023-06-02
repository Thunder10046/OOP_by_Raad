#include <bits/stdc++.h>
#include <stdexcept>
using namespace std;

// Problem Statement: In the following input i is the index of array ax[]. The program prints
// ax[i]. Then write catch block if i is out of range of ax[]. Write three catch blocks to fullfill
// the purpose
// i) a catch block receives the value of i
// ii) a catch block receives string “Out of Range Error”
// iii) a default catch() if above two catch block doesn’t match

int main()
{
    int i;
    int ax[5] = {10, 20, 60, 40, 30};
    cout << "enter index:";
    cin >> i;
    try
    {
        if(i>4 || i<0)
        {
            throw runtime_error("Runtime Error");
        }

        cout << "ax[" << i << "]=" << ax[i] << endl;  

    }
    catch(int e_int)
    {
        cout<<"Can't execute program. Inserted range: "<<e_int<<endl;
    }
    catch(char const*e)
    {
        cout<<e<<endl;
    }
    catch(runtime_error e)
    {
        cout<<e.what()<<endl;
    }
    catch(...)
    {
        cout<<"Default Exception"<<endl;
    }
    
}