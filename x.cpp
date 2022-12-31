// Author Sapnil Patel
#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    int lenOfLongSubarr(int A[], int N, int k)
    {
        int WR = 0;
        int sum = 0;
        deque<int> dq;
        vector<int> v={0};
        while (WR < N)
        {
            if (sum <= k)
            {
                sum += A[WR];
                dq.push_back(A[WR]);
                WR++;
            }
            if (sum > k)
            {
                // if(dq.front()>0)
                // {
                    sum -= abs(dq.front());    
                // }
                dq.pop_front();
            }
            if (sum == k)
            {
                if (v.back() < dq.size())
                {
                    v.push_back(dq.size());
                    // if(dq.front()>0)
                    // {
                        sum -= abs(dq.front());   
                    // }
                    dq.pop_front();
                }
            }
        }
        return v.back();
    }
};
int main()
{
    int n=17;
    int A[n] = {-13, 0, 6, 15, 16, 2, 15, -12, 17, -16, 0, -3, 19, -3, 2, -9, -6};
    int K = 15;
    Solution s;
    cout<<"ANS : "<<s.lenOfLongSubarr(A,n,K);
}
