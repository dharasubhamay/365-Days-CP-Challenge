//217. Contains Duplicate
//https://leetcode.com/problems/contains-duplicate/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(auto& it:nums){
            s.insert(it);
        }
        
        int slength = s.size();
        int numslength = nums.size();
        
        if(slength == numslength)
            return false;
        else
            return true;
    }
};