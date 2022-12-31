/* Some time ago, Chef bought X stocks at the cost of Rs. Y each. Today, Chef is going to sell all these X stocks at Rs. Z each. What is Chef's total profit after he sells them?

Chef's profit equals the total amount he received by selling the stocks, minus the total amount he spent buying them. */

// Date:-26/1/2022
// Author Sapnil Patel

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int buying_price = x*y;
        int selling_price = x*z;
        int profit = selling_price - buying_price;
        cout<<profit<<endl;
    }
    return 0;
}