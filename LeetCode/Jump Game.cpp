#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

int dp[10005];  ////UNSOLVED-TLE (COULDN'T FIGURE OUT WHERE THE BUG IS)

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        memset(dp,-1,sizeof(dp));
        if(solve(n,0,nums)==1){return true;}
        else{return false;}
    }

    int solve(int n, int pos, vector<int>& nums)
    {
        if(pos==n-1){return 1;}
        if(pos>n-1){return 0;}
        if(dp[pos]!=-1){return dp[pos];}
        int temp=0;
        int ans=0;
        for(int i=1;i<=nums[pos];i++)
        {
            temp=solve(n, pos+i, nums);
            ans = ans||temp;
        }
        dp[pos]=ans;
        return dp[pos];
    }

};


int main()
{
    int n,t;
    cin>>n;
    //int arr[n];
    //for(int i=0;i<n;i++){cin>>arr[i];}
    vector<int> nums;
    for(int i=0;i<n;i++){cin>>t; nums.push_back(t);}
    Solution m;
    //cout<<m.canJump(arr,n)<<endl;
    cout<<m.canJump(nums)<<endl;
    for(int i=0;i<n;i++){cout<<dp[i]<<" ";}
}
/*
5
3 2 1 0 4
*/
