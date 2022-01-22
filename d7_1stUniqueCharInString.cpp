//387. First Unique Character in a String
//https://leetcode.com/problems/first-unique-character-in-a-string/

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> arr(26, 0);
        for(int i=0;s[i];i++)
        {
            arr[s[i] - 'a']++;
        }
        for(int i=0;s[i];i++)
        {
            if(arr[s[i] - 'a'] == 1)
                return i;
        }
        return -1;
    }
};