// Date:-6/2/2021
// Author Sapnil Patel

#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        double ans = pow(0.143*N,N);
        // cout<<ans;
        cout<<round(ans)<<endl;
    }

  
}