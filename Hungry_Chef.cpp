// Date:-23/7/2022
// Author Sapnil Patel
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n, r;
        cin >> x >> y >> n >> r;

        if ((r / y) >= n)
        {
            cout << 0 << " " << n << endl;
        }
        else if ((r / x) < n)
        {
            cout << "-1" << endl;
        }
        else
        {
            int one = (y * n);
            int two = (x - y);
            int three = (r - one) / (two);

            if ((r - (one)) % (two) != 0)
            {
                three = three + 1;
            }
            cout << three << " " << n - three << endl;
        }
    }
    return 0;
}