// Date:-14/09/2022
// Author Sapnil Patel
#include <bits/stdc++.h>
using namespace std;

void distance()
{
    long long n,m;
    cin>>n>>m;
    long long arr[n];
    long long ans = 0,biggest=m;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        ans += max(abs(arr[i]-1),abs(arr[i]-biggest));
    }
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       distance();
    }
}