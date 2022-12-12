vector<vector<int>> v;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> p;
        p.clear();
        v.clear();
        vector<bool> used(nums.size(),false);
        v.push_back(p);
        solve(0, p, nums, used);

        return v;
    }

    void solve(int pos, vector<int>& p, vector<int>& nums, vector<bool>& used)
    {
        for(int i=pos;i<nums.size();i++)
        {
            if(!used[i])
            {
                p.push_back(nums[i]);
                v.push_back(p);
                used[i]=true;
                if(i!=nums.size()-1){solve(i+1,p,nums,used);}
                used[i]=false;
                p.pop_back();
            }
        }
    }
};

