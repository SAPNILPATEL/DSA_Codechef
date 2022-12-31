// Date:-22/1/2022
// Author Sapnil Patel;
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num;
        cin>>num;
        int ans;
        int count = 0;
        while (num > 10)
        {
            ans=0;
            ans = num % 10;
            if(ans == 4)
            {
                count++;
            }
        }
        cout<<count;
    }
    return 0;
}