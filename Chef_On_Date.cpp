// Date:-13/7/2022
// Author Sapnil Patel
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(y>x)
        {
            cout<<"No"<<endl;
        }
        else if(y<=x)
        {
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}