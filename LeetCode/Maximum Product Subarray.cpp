#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

pair<int,int> dp[20010];

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){dp[i].first=nums[i]; dp[i].second=nums[i];}
        solve(nums,nums.size()-1);
        int mx=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            mx=max(mx,max(dp[i].first,dp[i].second));
        }
        return mx;
    }

    void solve(vector<int>& nums, int pos)
    {
        for(int i=pos-1;i>=0;i--)
        {
            int temp1=max(dp[i].first, max(max(dp[i].first*dp[i+1].first, dp[i].first*dp[i+1].second),
                         max(dp[i].second*dp[i+1].first, dp[i].second*dp[i+1].second)));
            int temp2=min(dp[i].first, min(min(dp[i].first*dp[i+1].first, dp[i].first*dp[i+1].second),
                         min(dp[i].second*dp[i+1].first, dp[i].second*dp[i+1].second)));

            dp[i].first=max(temp1,temp2);
            dp[i].second=min(temp1,temp2);
        }
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
    cout<<s.maxProduct(v)<<endl;
    //for(int i=0;i<v.size();i++){cout<<dp[i].first<<" "<<dp[i].second<<endl;}
}

/*
4
2 3 -2 4

3
-3 -1 -1
*/

