// Author @Sapnil Patel
// Date:-30/11/22
#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(int a[], int n)
{
        vector<int>ans;
        int flag=0;
        for(int i=0;i<n-1;i++)
        {
            flag=0;
            for(int j=i+1;j<n;j++)
            {
                if(a[i]<a[j])
                {
                    flag=1;
                    break;
                }   
            }
            if(flag==0)
            {
                ans.push_back(a[i]);
            }
        }   
        ans.push_back(a[n-1]);
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
}

int main()
{
    int arr[6]={16,17,4,3,5,2};
    leaders(arr,6);
}