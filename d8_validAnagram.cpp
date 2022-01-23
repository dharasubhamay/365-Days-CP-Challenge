//242. Valid Anagram
//https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() == t.length())
        {
            vector<int> alphahash(26, 0);
            for(int i=0;s[i];i++)
            {
                alphahash[s[i] - 'a'] += 1;
            }
            for(int i=0;t[i]; i++)
            {
                if(alphahash[t[i] - 'a'] == 0)
                    return false;
                else
                    alphahash[t[i] - 'a'] -= 1;
            }
            return true;
        }
        else
            return false;
    }
};