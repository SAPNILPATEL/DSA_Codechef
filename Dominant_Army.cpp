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
        int A,B,C;
        cin>>A;
        cin>>B;
        cin>>C;

        if((B+C)<A)
        {
            cout<<"YES"<<endl;
        }
        else if((A+C)<B)
        {
            cout<<"YES"<<endl;
        }
        else if((A+B)<C)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}