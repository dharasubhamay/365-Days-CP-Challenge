//36. Valid Sudoku
//https://leetcode.com/problems/valid-sudoku/

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<string> hash;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    string s1 = "row"+to_string(i)+board[i][j];
                    string s2 = "col"+to_string(j)+board[i][j];
                    string s3 = "box"+to_string((i/3)*3 +(j/3))+board[i][j];
                    
                    if(hash.find(s1)==hash.end() && hash.find(s2) ==hash.end() && hash.find(s3) == hash.end())
                    {
                          hash.insert(s1);
                          hash.insert(s2);
                          hash.insert(s3);
                    }
                    else
                        return false;
                }
            }
        }
        return true;
    }
};