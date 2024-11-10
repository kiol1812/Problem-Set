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

TreeNode* buildTree(vector<int> &pre, vector<int> &in, int il, int ir){
    // todo
}

int main(){
    vector<int> inorder, preorder;
    string str;
    int tmp;
    getline(cin, str);
    istringstream ss(str);
    while(ss>>tmp) preorder.push_back(tmp);
    getline(cin, str);
    ss = istringstream(str);
    while(ss>>tmp) inorder.push_back(tmp);

    travel(buildTree(preorder, inorder, 0, inorder.size()-1));
}