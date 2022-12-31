// Date:-6/2/2021
// Author Sapnil Patel

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        int length;
        cin >> length;

        int k;
        cin >> k;

        string binary;
        cin >> binary;

        for (int i = 0, j = length - 1; i < j; i++, j--)
        {
            if (binary[i] != binary[j])
            {
                count++;
            }
        }

        if (count <= k)
        {
            if (length % 2 == 1)
            {
                cout << "YES" << endl;
            }
            else if ((k - count) % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }

        else
        {
            cout << "NO" << endl;
        }
    }
}