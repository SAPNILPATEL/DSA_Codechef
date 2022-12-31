/*It is JJ's birthday and you decide to gift him a string S (consisting of English alphabet only) of length N. But you also know that JJ does not like palindromes so you decide that none of the substrings of S of length ≥2 should be a palindrome.

Can you find any suitable string which can be gifted to JJ?

Recall that a string is called palindrome if it reads the same backwards and forwards, for e.g. noon and level are palindromic strings. */

// Date:-23/1/2022
// Author Sapnil Patel
// January cook-off 2022

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         char s[n];
//         cin>>s;
//         // Pick starting point
//         for (int len = 1; len <= n; len++)
//         {
//             // Pick ending point
//             for (int i = 0; i <= n - len; i++)
//             {
//                 //  Print characters from current
//                 // starting point to current ending
//                 // point.
//                 int j = i + len - 1;
//                 for (int k = i; k <= j; k++)
//                     cout << s[k];

//                 cout << endl;
//             }
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

// Returns total number of palindrome substring of
// length greater then equal to 2
int CountPS(char str[], int n)
{
    // create empty 2-D matrix that counts all palindrome
    // substring. dp[i][j] stores counts of palindromic
    // substrings in st[i..j]
    int dp[n][n];
    memset(dp, 0, sizeof(dp));

    // P[i][j] = true if substring str[i..j] is palindrome,
    // else false
    bool P[n][n];
    memset(P, false, sizeof(P));

    // palindrome of single length
    for (int i = 0; i < n; i++)
        P[i][i] = true;

    // palindrome of length 2
    for (int i = 0; i < n - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            P[i][i + 1] = true;
            dp[i][i + 1] = 1;
        }
    }

    for (int gap = 2; gap < n; gap++)
    {

        for (int i = 0; i < n - gap; i++)
        {

            int j = gap + i;

            if (str[i] == str[j] && P[i + 1][j - 1])
                P[i][j] = true;

            if (P[i][j] == true)
                dp[i][j] = dp[i][j - 1] + dp[i + 1][j] + 1 - dp[i + 1][j - 1];
            else
                dp[i][j] = dp[i][j - 1] + dp[i + 1][j] - dp[i + 1][j - 1];
        }
    }

    return dp[0][n - 1];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int p;
        cin >> p;
        char str[p];
        cin >> str;
        int n = strlen(str);
        cout << CountPS(str, n) << endl;
    }
    return 0;
}