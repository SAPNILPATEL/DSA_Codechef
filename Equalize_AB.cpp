// Author Sapnil Patel
// Date:-23/09/22
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,x;
        cin>>a>>b>>x;
        if(a==b)
        {
            cout<<"YES"<<endl;
            break;
        }
        int subtraction = abs(a-b);

        if(subtraction!=x && subtraction%x==0)
            cout<<"YES"<<endl;
    }
}