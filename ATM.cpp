// Date:-23/1/2022
// Author Sapnil Patel

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int withdrawl_amount;
    cin >> withdrawl_amount;
    float balance;
    cin >> balance;
    double ans = 0.00;
    if ((withdrawl_amount+0.50) <= balance)
    {

        if (withdrawl_amount % 5 == 0)
        {
            ans = (balance - withdrawl_amount) - 0.50;
            cout << fixed << setprecision(2) << ans << endl;
        }
        else
        {
            cout << fixed << setprecision(2) << balance << endl;
        }
    }
    else
    {
        cout << fixed << setprecision(2) << balance << endl;
    }
    return 0;
}