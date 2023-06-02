#include<bits/stdc++.h>
using namespace std; 

int main()
{
    vector<int> ar  = {5,6,7,8,9,10};
    vector<int>arr = {10,15,20};
    vector<int>::iterator ptr;
    // for (ptr = ar.begin(); ptr<ar.end(); ptr++)
    // {
    //     cout<<*ptr<<endl;
    //     advance(ptr, 2);
    // }
    ptr = ar.begin();
    advance(ptr, 2);
    cout<<*ptr<<endl;

    copy(arr.begin(), arr.end(), inserter(ar,ptr));

    for (ptr = ar.begin(); ptr<ar.end(); ptr++)
    {
        cout<<*ptr<<endl;
        
    }

    
}