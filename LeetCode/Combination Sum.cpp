vector<vector<int>> v;
int sum;

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> p;
        p.clear();
        v.clear();
        sum=0;
        solve(0, p, candidates, target, sum);

        return v;
    }

    void solve(int pos, vector<int>& p, vector<int>& candidates, int target, int& sum)
    {
        // for(int i=0;i<p.size();i++){cout<<p[i]<<" ";}
        // cout<<endl;
        if(sum==target){v.push_back(p); return;}
        if(sum>target){return;}

        for(int i=pos; i<candidates.size(); i++)
        {
            p.push_back(candidates[i]);
            sum = sum + candidates[i];
            solve(i, p, candidates, target, sum);
            sum = sum - candidates[i];
            p.pop_back();
        }
    }
};
