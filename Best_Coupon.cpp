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
        int X;
        cin>>X;

        int discount1 = (X*10/100);
        int discount2 = 100;

        if(discount1>discount2)
        {
            cout<<discount1<<endl;
        }
        else if(discount1<discount2)
        {
            cout<<discount2<<endl;
        }
        else if(discount1==discount2)
        {
            cout<<discount1<<endl;
        }
    }
    return 0;
}