// Author Sapnil Patel
// Date:-15/10/22
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int n;
        cin >> n>> s;
        if (n <= 10)
            cout << s << endl;
        else
            cout << s[0] << n-2 << s[n - 1];   
    }
    return 0;
}