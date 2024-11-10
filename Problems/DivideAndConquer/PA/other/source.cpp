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

int curr=-1;
unordered_map<int, int> mp;
TreeNode* buildTree(vector<int> &pre, vector<int> &in, int il, int ir){
    if(il>ir) return nullptr;
    int val = pre[++curr];
    TreeNode* root = new TreeNode(val);
    root->left = buildTree(pre, in, il, mp[val]-1);
    root->right= buildTree(pre, in, mp[val]+1, ir);
    return root;
}

int main(){
    string str; getline(cin, str);
    istringstream ss(str);
    vector<int> inorder, preorder;
    int tmp; while(ss>>tmp) preorder.push_back(tmp);
    getline(cin, str); ss=istringstream(str);
    while(ss>>tmp) inorder.push_back(tmp);

    int n=inorder.size()-1;
    for(int i=0; i<=n; ++i) mp[inorder[i]]=i;
    travel(buildTree(preorder, inorder, 0, n));
}