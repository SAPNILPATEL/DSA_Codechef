// Author Sapnil Patel
// Date:-11/05/2022

#include <bits/stdc++.h>
using namespace std;

int numIdenticalPairs(int *arr1,int *arr2)
{
    int res = 0;
    int a = sizeof(arr1);

    for (int i = 0; i < a; i++)
        for (int j = i + 1; j < a; j++)
            if (arr1[i] == arr2[j])
                res++;

    return res;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin>>n;
        int arr1[n];
        int arr2[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
        }

        for(int i=0;i<n;i++)
        {
            cin>>arr2[i];
        }

        cout << numIdenticalPairs(arr1,arr2) << endl;
    }
    return 0;
}


