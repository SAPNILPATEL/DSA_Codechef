/* A city has been infected by a contagious virus.

In a survey, it was found that A out of the N people living in the city are currently infected. It has been observed that the only way for a person to get infected is if he comes in contact with an already infected person, and both of them are NOT wearing a mask.

The mayor of the city wants to make a new Mask Policy and find out the minimum number of people that will be required to wear a mask to avoid the further spread of the virus. Help the mayor in finding this number.

Note: The only aim of the mayor is to stop virus spread, not to mask every infected person. */

// Date:-23/1/2022
// Author Sapnil Patel
// January cook-off 2022

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,A;
        cin>>N>>A;
        int sub = N-A;
        if(sub<A)
        {
            cout<<sub<<endl;
        }
        else if(sub>A)
        {
            cout<<A<<endl;
        }
        else if(sub==A)
        {
            cout<<sub<<endl;
        }
    }
    return 0;
}