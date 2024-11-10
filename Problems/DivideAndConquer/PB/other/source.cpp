#include <iostream>
#include <queue>
#include <vector>
#include <sstream>
#include <string>
#include <unordered_map>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode():val(0), left(nullptr), right(nullptr){}
    TreeNode(int x):val(x), left(nullptr), right(nullptr){}
    TreeNode(int x, TreeNode *l, TreeNode *r):val(x), left(l), right(r){}
};
void travel(TreeNode *root){
    queue<TreeNode*> bfs;
    bfs.push(root);
    while(!bfs.empty()){
        TreeNode *curr = bfs.front();
        bfs.pop();
        if(curr!=nullptr){
            bfs.push(curr->left);
            bfs.push(curr->right);
        }
        if(curr==nullptr) cout<<"null";
        else cout<<curr->val;
        if(!bfs.empty()) cout<<" ";
    }
    cout<<"\n";
}

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

int main(){
    string str; getline(cin, str);
    istringstream ss(str);
    vector<int> nums;
    int tmp; while(ss>>tmp) nums.push_back(tmp);

    travel(buildTree(nums, 0, nums.size()-1));
}