// Author Sapnil Patel
// Date:-24/04/2022

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int X,Y;
        cin>>X>>Y;

        int ans_double = X*3;
        int ans_triple = Y*2;

        if(ans_double>ans_triple)
        {
            cout<<ans_triple<<endl;
        }
        else if(ans_double<ans_triple)
        {
            cout<<ans_double<<endl;
        }
        else if(ans_double==ans_triple)
        {
            cout<<ans_double<<endl;
        }
    }
    return 0;
}