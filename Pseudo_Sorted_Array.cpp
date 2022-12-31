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
        int n;
        int co = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i - 1] > arr[i] && i >= 1)
            {
                swap(arr[i-1],arr[i]);
                if (arr[i - 2] > arr[i - 1] &&i >= 2)
                {
                    co += 2;
                }
                else if(arr[i-2]<arr[i-1] && i>=2)
                {
                    co+=1;
                }
                else if(i==1)
                {
                    co+=1;
                }
                else
                {
                    co+=1;
                }
            }
        }

        if(co<2)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        // for (int i = 0; i < n; i++)
        // {
        //     if (arr[i] > arr[i + 1])
        //     {
        //         swap(arr[i], arr[i + 1]);
        //         break;
        //     }
        // }

        // int count = 0;

        // for (int i = 0; i < n; i++)
        // {
        //     if (arr[i] > arr[i + 1])
        //     {
        //         count++;
        //     }
        // }

        // if (count > 0)
        // {
        //     cout << "NO" << endl;
        // }
        // else if (count == 0)
        // {
        //     cout << "YES" << endl;
        // }
    }
    return 0;
}