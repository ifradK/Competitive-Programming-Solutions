#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int res=INT_MIN;
        solve(root,res);
        return res;
    }

    int solve(TreeNode* root, int &res)
    {
        if(root==NULL){return 0;}
        int l=solve(root->left,res);
        int r=solve(root->right,res);

        int temp=max(l,r)+1;
        int ans=max(temp,l+r+1);
        res=max(res,ans);

        return temp;
    }
};
