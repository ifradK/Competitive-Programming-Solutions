vector<vector<int>> v;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> p;
        p.clear();
        v.clear();
        vector<bool> used(nums.size(),false);
        solve(p, nums, used);

        return v;
    }

    void solve(vector<int>& p, vector<int>& nums, vector<bool>& used)
    {
        if(p.size()==nums.size()){v.push_back(p); return;}
        for(int i=0;i<nums.size();i++)
        {
            if(!used[i])
            {
                p.push_back(nums[i]);
                used[i]=true;
                solve(p,nums,used);
                used[i]=false;
                p.pop_back();
            }
        }
    }
};
