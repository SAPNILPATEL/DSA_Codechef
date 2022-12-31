// // Author Sapnil Patel
// // Date:-13/06/2022

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int x;
        cin >> x;
        int s = 0;

        if (x % 3 == 0)
        {
            cout <<0<<endl;;
        }
        else if(x==1)
        {
            cout<<2<<endl;
        }
        else if(x==2)
        {
            cout<<1<<endl;
        }
        else if (x % 3 != 0)
        {
            while (s <= x)
            {
                s = s + 3;
            }
            int ans = s%x;
            cout<<ans<<endl;
        }
    }
    return 0;
}