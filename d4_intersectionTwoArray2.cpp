//350. Intersection of Two Arrays II
//https://leetcode.com/problems/intersection-of-two-arrays-ii/


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> resarray;
        map<int, int> mp;
        for(int i=0;i<nums1.size();i++)
        {
            mp[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            auto it = mp.find(nums2[i]);
            if(it != mp.end() && it->second > 0)
            {
                resarray.push_back(nums2[i]);
                it->second--;
            }
        }
        return resarray;
    }
};