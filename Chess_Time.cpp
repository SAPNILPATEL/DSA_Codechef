// Date:-13/7/2022
// Author Sapnil Patel
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int hours;
        cin>>hours;
        int min = hours * 60;
        cout<<min/20<<endl;
    }
    return 0;
}