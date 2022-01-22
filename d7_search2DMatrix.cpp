//74. Search a 2D Matrix
//https://leetcode.com/problems/search-a-2d-matrix/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        vector<int> tempvect(m, 0);
        for(int i=0;i<m;i++)
        {
            tempvect[i] = matrix[i][0];
        }
        int pos = 0;
        if(target >= tempvect[m-1])
        {
            pos = m-1;
        }
        else
        {
            for(int i=0;i<m-1;i++)
            {
                if(target >= tempvect[i] && target <= tempvect[i+1])
                {
                    pos = i;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(matrix[pos][i] == target)
                return true;
        }
        return false;
        
    }
};