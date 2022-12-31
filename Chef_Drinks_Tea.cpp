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
        int x,y,z;
        cin>>x>>y>>z;

        int ans = x/y;

        if(x%y==0)
        {
            cout<<ans*z<<endl;
        }
        else
        {
            cout<<(ans+1)*z<<endl;
        }
    }
    return 0;
}