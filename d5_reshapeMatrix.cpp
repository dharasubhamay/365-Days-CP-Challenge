//566. Reshape the Matrix
//https://leetcode.com/problems/reshape-the-matrix/

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if(m*n == r*c)
        {
            int x = 0;
            int y = 0;
            vector<vector<int>> resvect(r, vector<int>(c,0));
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    resvect[i][j] = mat[x][y++];
                    if(y == n)
                    {
                        y %= n;
                        x++;
                    }
                }
            }
            return resvect;
        }
        else
        {
            return mat;
        }
    }
};