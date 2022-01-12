//Problem : https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/
// Name : 1022. Sum of Root To Leaf Binary Numbers

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int sumRootToLeaf(TreeNode* root, int sum){
        if(root == 0) 
            return 0;
        else
            sum = (sum << 1) + root->val; 
        
        if((root->left == 0) && (root->right == 0)) 
            return sum;
        else
            return (sumRootToLeaf(root->left, sum) + sumRootToLeaf(root->right, sum));
            
    }
public:
    int sumRootToLeaf(TreeNode* root) {
        return sumRootToLeaf(root, 0);
    }
};