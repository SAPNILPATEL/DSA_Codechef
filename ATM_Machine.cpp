// Author Sapnil Patel
// Date:-17/10/22
#include <iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(k-a[i]>=0)
	        {
	            k=k-a[i];
                cout<<1;
	        }
	        else 
            {
                cout<<0; 
            }
	    }
	    cout<<endl;
	}
}
