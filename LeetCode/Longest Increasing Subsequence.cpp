#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

int dp[2505];

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){dp[i]=1;}
        return solve(nums);
    }

    int solve(vector<int>& nums)
    {
        int ans=-1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            int temp=1;
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]<nums[j])
                {
                    temp=max(temp,1+dp[j]);
                }
            }
            dp[i]=temp;
            ans=max(ans,dp[i]);
        }
        return ans;
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
    cout<<s.lengthOfLIS(v)<<endl;
    //for(int i=0;i<v.size();i++){cout<<dp[i]<<" ";}
}
