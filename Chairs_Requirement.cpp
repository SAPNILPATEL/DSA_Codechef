// // Author Sapnil Patel
// // Date:-13/06/2022

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int x,y;
        cin>>x>>y;
        if((x-y)<0)
        {
            cout<<0<<endl;
        }
        else
        {
             cout<<abs(x-y)<<endl;
        }
      
       
    }
}