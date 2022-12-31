/* It's dinner time. Ashish is very hungry and wants to eat something . He has X rupees in his pocket. Since Ashish is very picky, he only likes to eat either PIZZA or BURGER. In addition, he prefers eating PIZZA over eating BURGER. The cost of a PIZZA is Y rupees while the cost of a BURGER is Z rupees.

Ashish can eat at most one thing. Find out what will Ashish eat for his dinner. */

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
        int x,y,z;
        cin>>x>>y>>z;

        if(x>=y)
        {
            cout<<"PIZZA"<<endl;
        }
        else if(x>=z)
        {
            cout<<"BURGER"<<endl;
        }
        else if(x < y && x < z)
        {
            cout<<"NOTHING"<<endl;
        }
    }
}