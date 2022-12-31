// Author @Sapnil Patel
// Date:-30/11/22
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
        int odd=0;
        int even=0;
        int mul=0;
        for(int i=0;i<n;i++)
        {
            if(i%2!=0)
            {
                odd+=arr[i];
            }
            else
                even += arr[i];
        }
        mul = odd*even;
        if(mul%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else    
            cout<<"NO"<<endl;
    }
}

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    int n;
// 	    cin>>n;
// 	    int arr[n];
// 	    for(int i=0;i<n;i++)
// 	    {
// 	        cin>>arr[i];
// 	    }
	    
// 	    vector<int>ans1;
// 	    vector<int>ans2;
// 	    int cnt1=0;
// 	    int cnt2=0;
	    
// 	    for(int i=0;i<n;i++)
// 	    {
// 	        if(arr[i]%2!=0)
// 	        {
// 	            ans1.push_back(arr[i]);
// 	            cnt1++;
// 	        }
	            
// 	        else
// 	        {
// 	            ans2.push_back(arr[i]);
// 	            cnt2++;
// 	        }
	            
// 	    }
//         cout<<"First : "<<endl;
//         for(int i=0;i<cnt1;i++)
//         {
//             cout<<ans1[i]<<" ";
//         }
//         cout<<endl<<"Second : "<<endl;
//         for(int i=0;i<cnt2;i++)
//         {
//             cout<<ans2[i]<<" ";
//         }
// 	    int sum1=0;
// 	    int sum2=0;
// 	    int solution=0;
// 	    if(cnt1==n && cnt2==n)
// 	        cout<<"NO"<<endl;
	        
// 	    if(cnt1!=n && cnt2!=n)
// 	    {
// 	        for(int i=0;i<cnt1;i++)
// 	        {
// 	            sum1 += ans1[i];
// 	        }
// 	        for(int i=0;i<cnt2;i++)
// 	        {
// 	            sum2 += ans2[i];
// 	        }
// 	        solution=sum1*sum2;
// 	        if(solution%2==0)
// 	            cout<<"NO"<<endl;
// 	        else
// 	            cout<<"YES"<<endl;
// 	    }
// 	}
// 	return 0;
// }
