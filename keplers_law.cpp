/*Kepler’s Law states that the planets move around the sun in elliptical orbits with the sun at one focus. Kepler's 3rd law is The Law of Periods, according to which:

The square of the time period of the planet is directly proportional to the cube of the semimajor axis of its orbit.
You are given the Time periods (T1,T2) and Semimajor Axes (R1,R2) of two planets orbiting the same star.

Please determine if the Law of Periods is satisfied or not, i.e, if the constant of proportionality of both planets is the same.

Print "Yes" (without quotes) if the law is satisfied, else print "No".*/

// Date:- 7/1/22
//Author Sapnil Patel
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int T;
    cin>>T;
    while(T--)
    {
        float t1,t2,r1,r2;
        cin>>t1>>t2>>r1>>r2;

        float ans1 = pow(t1,2);
        float ans2 = pow(t2,2);
        float ans3 = pow(r1,3);
        float ans4 = pow(r2,3);

        float left_side = (ans1/ans3);
        float right_side = (ans2/ans4);

        if(left_side == right_side)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}