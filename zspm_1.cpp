#include<bits/stdc++.h>
using namespace std;
int minStoneSum(vector<int>& piles, int k) {
        int i = piles.size()-1;
        sort(piles.begin(),piles.end());
        while(k>0)
        {
            //Remove Stones
            if(k>=1)
            {
                piles[i] = piles[i]-floor(piles[i]/2);
                k--;
            }
            else
            {
                break;
            }
            for(int j=0;j<piles.size();j++)
            {
                cout<<piles[j]<<" ";
            }
            cout<<endl;
            sort(piles.begin(),piles.end());
        }
        int minStones = 0;
        for(int s = 0;s<piles.size();s++)
        {
            minStones += piles[s];
        }
        return minStones;
}
int main()
{
    vector<int>piles = {5,4,9};
    cout<<minStoneSum(piles,2);
    return 0;
}