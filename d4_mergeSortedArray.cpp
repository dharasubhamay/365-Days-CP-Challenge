//88. Merge Sorted Array
//https://leetcode.com/problems/merge-sorted-array/


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int endpt = m+n-1;
        while(m>0 && n>0)
        {
            if(nums1[m-1] > nums2[n-1])
            {
                nums1[endpt] = nums1[m-1];
                m = m-1;
            }
            else
            {
                nums1[endpt] = nums2[n-1];
                n = n-1;
            }
            
            endpt = endpt-1;
        }
        while(n>0)
        {
            nums1[endpt] = nums2[n-1];
            n = n-1;
            endpt = endpt - 1;
        }
    }
};