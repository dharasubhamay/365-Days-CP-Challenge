//383. Ransom Note
//https://leetcode.com/problems/ransom-note/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> magazineHash(26, 0);
        for(int i=0;magazine[i];i++)
        {
            magazineHash[magazine[i] - 'a'] += 1;
        }
        for(int i=0;ransomNote[i];i++)
        {
            if(magazineHash[ransomNote[i] - 'a'] == 0)
                return false;
            else
                magazineHash[ransomNote[i] - 'a'] -= 1;
        }
        return true;
    }
};