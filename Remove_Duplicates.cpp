// Author Sapnil Patel
// Date:-15/10/22
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int t;
    // cin >> t;
    // while(t--)
    // {
    //     string s;
    //     cin >> s;
    //     int i, j;
    //     int length = s.size();

    //     for (i = 0; i < length; i++)
    //     {
    //         for (j = i + 1; j < length; j++)
    //         {
    //             if (s[i] == s[j])
    //             {
    //                 s[j] = 0;
    //             }
    //         }
    //     }
    //     for (i = 0; i < length; i++)
    //     {
    //         if (s[i] != 0)
    //             cout << s[i];
    //     }
    //     cout << endl;
    // }

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        set<char> st;
        int l = s.size();
        for (int i = 0; i < l; i++)
        {
            st.insert(s[i]);
        }

        for (auto itr : st)
        {
            cout << itr;
        }
        cout<<endl;
    }
}