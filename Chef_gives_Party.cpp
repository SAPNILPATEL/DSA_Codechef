// Author Sapnil Patel
// Date:-11/05/2022

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,X,K;
        cin>>N;
        cin>>X;
        cin>>K;

        int ans = N*X;

        if(ans>K)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}