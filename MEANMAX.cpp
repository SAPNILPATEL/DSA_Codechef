/* JJ loves playing with averages. He has an array A of length N. He wants to divide the array A into two non-empty subsets P and Q such that the value of mean(P)+mean(Q) is as large as possible. (Note that each Ai must belong to either subset P or subset Q).

Help him find this maximum value of mean(P)+mean(Q).

As a reminder, the mean of a subset X of size M is defined as: mean(X)=∑Mi=1XiM.

For example, mean([3,1,4,5])=3+1+4+54=3.25. */

// Date:-23/1/2022
// Author Sapnil Patel
// January cook-off 2022

#include <bits/stdc++.h>
using namespace std;

#define all(cont) cont.begin(), cont.end()
#define ll long long
void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i<n;i++)
        cin>>arr[i];
    sort(arr.rbegin(),arr.rend());
    int a = *arr.begin();

    int sm = accumulate (all(arr),0LL);
    double ans = double(sm-a)/(n-1);
    ans+=a;
    cout<<setprecision(12)<<fixed;
    cout<<ans<<'\n';
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}