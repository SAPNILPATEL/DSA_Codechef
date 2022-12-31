/*A disease is spreading through ChefLand!

The disease spread as follows:

At the end of day 0, a single person is infected with the disease.
During the next 10 days, the number of infected people doubles each day, until the disease has spread to all people in ChefLand.
From day 11 onwards, the number of infected people triples each day, until the disease has spread to all people in ChefLand.
You are given the population of ChefLand N and a day D. How many people in ChefLand are infected at the end of day D?
*/

// Date:- 7/1/22
//Author Sapnil Patel
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long  n, d;
        scanf("%lld %lld",&n,&d);
        // cin >> n >> d;
        int ans = 1;

        if (d <= 10)
        {
            for (int i = 1; i <= d; i++)
            {
                ans = pow(2, i);
            }
            if (ans <= n)
            {
                // printf("%lld",ans);
                cout << ans << endl;
            }
            else
            {
                // printf("%lld",n);
                cout << n << endl;
            }
        }
        else if (d > 10)
        {
            for (int i = 1; i <= 10; i++)
            {
                ans = pow(2, i);
            }
            for (int j = 1; j <= (d - 10); j++)
            {
                ans = ans * pow(3, j);
            }
            if (ans <= n)
            {
                // printf("%lld",ans);
                cout << ans << endl;
            }
            else
            {
                // printf("%lld",n);
                cout << n << endl;
            }
        }
    }
}