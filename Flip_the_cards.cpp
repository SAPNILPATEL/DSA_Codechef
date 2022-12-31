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
        int n,x;
        cin>>n>>x;
        int flip=n-x;
        if(flip<=x)
            cout<<flip<<endl;
        else
            cout<<x<<endl;
    }
}