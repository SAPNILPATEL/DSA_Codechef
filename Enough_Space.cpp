// // Author Sapnil Patel
// // Date:-03/07/2022

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,X,Y;
        cin>>N>>X>>Y;
        if((X+Y*2)<=N)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}