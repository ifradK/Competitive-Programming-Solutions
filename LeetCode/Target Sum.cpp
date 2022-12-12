#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

int dp[25][20005];

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end(),greater<int>());
        target=abs(target);
        int sum=0;
        for(int i=0;i<nums.size();i++){sum=sum+nums[i];}
        if(sum==0){return pow(2,nums.size());}
        else if((sum+target)%2==1){return 0;}
        else
        {
            sum=(sum+target)/2;
            for(int i=0;i<=sum;i++){dp[0][i]=0;}
            for(int i=0;i<=nums.size();i++){dp[i][0]=1;}
            solve(nums,sum);
            return dp[nums.size()][sum];
        }
    }

    void solve(vector<int>& nums, int sum)
    {
        for(int i=1;i<=nums.size();i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(nums[i-1]<=j){dp[i][j] = dp[i-1][j-nums[i-1]] + dp[i-1][j];}
                else{dp[i][j] = dp[i-1][j];}
            }
        }
    }
};


int main()
{
    int n,a,target;
    cin>>n>>target;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    Solution s;
    cout<<s.findTargetSumWays(v,target)<<endl;
//    int sum=0;
//    for(int i=0;i<v.size();i++){sum=sum+v[i];}
//    sum=(sum+target)/2;
//    for(int i=0;i<=v.size();i++)
//    {
//        for(int j=0;j<=sum;j++)
//        {
//            cout<<dp[i][j]<<" ";
//        }
//        cout<<endl;
//    }
}

