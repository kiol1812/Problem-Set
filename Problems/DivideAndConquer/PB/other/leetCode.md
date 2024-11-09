## Source code
```cpp
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
private:
    TreeNode* buildTree(vector<int> &nums, int l, int r){
        if(l>r) return nullptr;
        int idx=l;
        for(int i=l+1; i<=r; ++i){
            if(nums[i]>nums[idx]) idx=i;
        }
        TreeNode* root = new TreeNode(nums[idx]);
        root->left = buildTree(nums, l, idx-1);
        root->right= buildTree(nums, idx+1, r);
        return root;
    }
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return buildTree(nums, 0, nums.size()-1);
    }
};
```