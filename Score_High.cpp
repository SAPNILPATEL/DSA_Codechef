// Author Sapnil Patel
// Date:-23/05/2022

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int Total_que;
        cin>>Total_que;

        int A,B,C,D;
        cin>>A>>B>>C>>D;

        cout<<max(A,max(B,max(C,D)))<<endl;
    }
    return 0;
}