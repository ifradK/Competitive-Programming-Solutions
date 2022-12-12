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
    bool isValidBST(TreeNode* root) {
        vector<int> v;
        v.clear();
        solve(root,v);
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]>=v[i+1]){return false;}
        }
        return true;
    }

    TreeNode* solve(TreeNode* root, vector<int>& v)
    {
        if(root==NULL){return NULL;}

        TreeNode* left = solve(root->left,v);
        if(root!=NULL){v.push_back(root->val);}
        TreeNode* right = solve(root->right,v);

        return root;
    }
};


//SLIGHTY FASTER AND MORE EFFICIENT APPTOACH

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return solve(root,LONG_MAX,LONG_MIN);
    }

    bool solve(TreeNode* root, long mx, long mn)
    {
        if(root==NULL){return true;}
        if(root->val <= mn || root->val >= mx){return false;}

        return solve(root->left,root->val,mn) && solve(root->right,mx,root->val);
    }
};
