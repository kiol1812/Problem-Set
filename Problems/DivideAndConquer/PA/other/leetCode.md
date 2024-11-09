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
    int curr;
    unordered_map<int, int> mp;
    TreeNode* buildTree_(vector<int>& preorder, vector<int>& inorder, int il, int ir){
        if(il>ir) return nullptr;
        int val = preorder[curr++];
        TreeNode* root = new TreeNode(val);
        root->left =buildTree_(preorder, inorder, il, mp[val]-1);
        root->right=buildTree_(preorder, inorder, mp[val]+1, ir);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        curr=0;
        int n=inorder.size()-1;
        for(int i=0; i<=n; ++i) mp[inorder[i]]=i;
        return buildTree_(preorder, inorder, 0, n);
    }
};
```