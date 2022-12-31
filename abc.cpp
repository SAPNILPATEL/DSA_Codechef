#include <iostream>
using namespace std;

int main()
{
    int n, target;
    cin >> n >> target;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        //         int ans = arr[0];
        for (int j = i; j < n-1; j++)
        {
            if ((arr[j] + arr[j + 1] == target))
            {
                cout << arr[j] << " " << arr[j + 1] << endl;
                break;
            }
            else
            {
                cout << "-1 -1"<< endl;
                break;
            }
        }
    }
}

/* Akshat has X rupees to spend in the current month. His daily expenditure is Y rupees, i.e., he spends Y rupees each day.

Given that the current month has 30 days, find out if Akshat has enough money to meet his daily expenditures for this month. */

// Author:- Sapnil patel
// Date:- 11/4/22
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int X,Y;
        cin>>X>>Y;
        if((Y*30)<=X)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}