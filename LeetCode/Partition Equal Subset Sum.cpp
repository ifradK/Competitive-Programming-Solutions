#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

bool dp[205][20005];

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){sum=sum+nums[i];}
        if(sum%2==1){return false;}
        else
        {
            for(int i=0;i<=sum/2;i++){dp[0][i]=false;}
            for(int i=0;i<=nums.size();i++){dp[i][0]=true;}
            solve(nums,sum);
            return dp[nums.size()][sum/2];
        }
    }

    void solve(vector<int>& nums, int sum)
    {
        for(int i=1;i<=nums.size();i++)
        {
            for(int j=1;j<=sum/2;j++)
            {
                if(nums[i-1]<=j){dp[i][j] = dp[i-1][j-nums[i-1]] || dp[i-1][j];}
                else{dp[i][j] = dp[i-1][j];}
            }
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
    cout<<s.canPartition(v)<<endl;
//    int sum=0;
//    for(int i=0;i<v.size();i++){sum=sum+v[i];}
//    for(int i=0;i<=v.size();i++)
//    {
//        for(int j=0;j<=sum;j++)
//        {
//            cout<<dp[i][j]<<" ";
//        }
//        cout<<endl;
//    }
}



