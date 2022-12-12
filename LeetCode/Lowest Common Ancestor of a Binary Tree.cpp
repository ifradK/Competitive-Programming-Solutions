/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<int> v1,v2;
        map<int,int> mp1,mp2;
        int ans;
        mp1.clear();
        mp2.clear();
        v1.clear();
        v2.clear();
        getpath(root,p->val,v1);
        getpath(root,q->val,v2);
        for(auto it:v1){mp1[it]++;}
        for(auto it:v2){mp2[it]++;}
        bool flag=false;
        for(auto it=v1.rbegin();it!=v1.rend();it++)
        {
            if(mp2.find(*it)!=mp2.end())
            {
                ans=*it;
                flag=true;
                break;
            }
        }
        if(!flag)
        {
            for(auto it=v2.rbegin();it!=v2.rend();it++)
            {
                if(mp1.find(*it)!=mp1.end())
                {
                    ans=*it;
                    break;
                }
            }
        }
        return getNode(root, ans);
    }

    bool getpath(TreeNode* root, int p_val, vector<int>& v)
    {
        if(root==NULL){return false;}

        v.push_back(root->val);
        if(root->val==p_val){return true;}

        if(getpath(root->left,p_val,v) || getpath(root->right,p_val,v)){return true;}
        v.pop_back();

        return false;
    }

    TreeNode* getNode(TreeNode* root, int ans)
    {
        if(root==NULL){return NULL;}
        if(root->val==ans){return root;}

        TreeNode* left = getNode(root->left,ans);
        TreeNode* right = getNode(root->right,ans);

        if(left!=NULL){return left;}
        else if(right!=NULL){return right;}
        return NULL;
    }
};



//ANOTHER APPROACH

/*
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root->val==p->val || root->val==q->val){return root;}
        if(!root->left && !root->right){return NULL;}

        TreeNode* leftT=NULL;
        TreeNode* rightT=NULL;
        if(root->left){leftT=lowestCommonAncestor(root->left,p,q);}
        if(root->right){rightT=lowestCommonAncestor(root->right,p,q);}

        if(leftT && rightT){return root;}
        return leftT==NULL?rightT:leftT;
    }

};
*/
