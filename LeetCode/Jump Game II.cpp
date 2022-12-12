#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

int dp[10005];

class Solution {
public:
    int jump(int arr[], int n) {
        memset(dp,-1,sizeof(dp));
        return solve(arr,n,0);
    }

    int solve(int arr[], int n, int pos)
    {
        if(pos>=n-1){return 0;}
        if(dp[pos]!=-1){return dp[pos];}
        int temp=0;
        int mn=INT_MAX;
        for(int i=1;i<=arr[pos];i++)
        {
            temp=1+solve(arr, n, pos+i);
            mn=min(temp,mn);
        }
        if(mn==INT_MAX){dp[pos]=INT_MAX-1;}
        else{dp[pos]=mn;}
        return dp[pos];
    }

};


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}
    Solution m;
    cout<<m.jump(arr,n)<<endl;
}


//LEETCODE VERSION
//int dp[10005];
//
//class Solution {
//public:
//    int jump(vector<int>& nums) {
//        int n=nums.size();
//        memset(dp,-1,sizeof(dp));
//        return solve(nums,n,0);
//    }
//
//    int solve(vector<int>& nums, int n, int pos)
//    {
//        if(pos>=n-1){return 0;}
//        if(dp[pos]!=-1){return dp[pos];}
//        int temp=0;
//        int mn=INT_MAX;
//        for(int i=1;i<=nums[pos];i++)
//        {
//            temp=1+solve(nums, n, pos+i);
//            mn=min(temp,mn);
//        }
//        if(mn==INT_MAX){dp[pos]=INT_MAX-1;}
//        else{dp[pos]=mn;}
//        return dp[pos];
//    }
//
//};

