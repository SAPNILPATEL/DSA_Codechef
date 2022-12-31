// Author Sapnil Patel
// Date:-24/04/2022

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A, B;
        cin >> A >> B;

        int valuation1 = A * 100 / 10;
        int valuation2 = B * 100 / 20;

        if (valuation1 > valuation2)
        {
            cout << "FIRST" << endl;
        }
        else if (valuation1 < valuation2)
        {
            cout << "SECOND" << endl;
        }
        else if (valuation1 == valuation2)
        {
            cout << "ANY" << endl;
        }
    }
    return 0;
}