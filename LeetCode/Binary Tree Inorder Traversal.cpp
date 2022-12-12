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
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        v.clear();
        solve(root,v);
        return v;
    }

    void solve(TreeNode* root, vector<int>& v)
    {
        if(root==NULL){cout<<"P NULL"<<endl; return;}
        else {cout<<"P "<<root->val<<endl;}

        solve(root->left,v);
        cout<<"BACK-LEFT "<<root->val<<endl;
        v.push_back(root->val);
        solve(root->right,v);
        cout<<"BACK-RIGHT "<<root->val<<endl;
        //v.push_back(root->val);
    }
};
