#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

int dp[110];

class Solution {
public:
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return solve(nums,0);
    }

    int solve(vector<int>& nums, int pos)
    {
        if(pos>=nums.size()){return 0;}
        if(dp[pos]!=-1){return dp[pos];}

        dp[pos]=max(nums[pos]+solve(nums,pos+2),solve(nums,pos+1));
        return dp[pos];
    }
};


int main()
{
    int n,a;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    Solution s;
    cout<<s.rob(v)<<endl;
    //for(int i=0;i<v.size();i++){cout<<dp[i]<<" ";}
}

