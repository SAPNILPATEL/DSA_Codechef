// Author Sapnil Patel
// Date:-11/05/2022

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A,B,M;
        cin>>A;
        cin>>B;
        cin>>M;

        int ans1 = abs(B-A);
        int ans2 = abs(M+A)-B;

        if(ans1<ans2)
        {
            cout<<ans1<<endl;
        }
        else if(ans1>ans2)
        {
            cout<<ans2<<endl;
        }
       
    }
    return 0;
}