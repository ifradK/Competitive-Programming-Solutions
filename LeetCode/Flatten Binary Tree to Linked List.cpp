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
    void flatten(TreeNode* root) {
        solve(root);
    }

    TreeNode* solve(TreeNode* root)
    {
        if(root==NULL){return NULL;}

        TreeNode* leftTail=solve(root->left);
        TreeNode* rightTail=solve(root->right);

        if(root->left)
        {
            while(leftTail->right){leftTail=leftTail->right;}
            leftTail->right=root->right;
            root->right=root->left;
            root->left=NULL;
        }

        return root;
    }
};
