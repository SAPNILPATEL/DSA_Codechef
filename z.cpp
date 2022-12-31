// Author Sapnil Patel
// Date:-25/09/22
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int startingRow = 0;
        int startingCol = 0;
        
        for(int i=0;i<row;i++)
        {
            int tempRow=i,tempCol=i;
            cout<<"After swapping each ele :- "<<endl;
            while(tempRow<row )
            {
                swap(matrix[startingRow][tempRow],matrix[tempCol][startingCol]);
                tempRow++;
                tempCol++;
                cout<<"matrix[startingRow][tempRow],matrix[tempCol][startingCol] :- "<<startingRow<<" "<<tempRow<<" "<<tempCol<<" "<<startingCol<<endl;
            }
            startingRow++;
            startingCol++;
        }
        
        //Swapping the rows
        int sRow=0;
        int eRow=row-1;
        while(sRow<eRow)
        {
            for(int i=0;i<col-1;i++)
            {
                swap(matrix[sRow][i],matrix[eRow][i]);
            }
            sRow++;
            eRow--;
        }
    }
};
int main()
{
    // vector<vector<int>>v;
    // cout<<"Input"<<endl;
    vector<vector<int>> vect
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout<<"Output"<<endl;
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         cout<<v[i][j];
    //     }
    // }cout<<endl;
    Solution s;
    s.rotate(vect);
}