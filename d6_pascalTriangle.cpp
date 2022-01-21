//118. Pascal's Triangle
//https://leetcode.com/problems/pascals-triangle/


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> resvect(numRows);
        for(int i=0;i<numRows;i++)
        {
            resvect[i].resize(i+1);
            resvect[i][0] = resvect[i][i] = 1;
            
            for(int j=1;j<i;j++)
            {
                resvect[i][j] = resvect[i-1][j-1] + resvect[i-1][j];
            }
        }
        return resvect;
    }
};