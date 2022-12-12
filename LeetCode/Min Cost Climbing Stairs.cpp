#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

int dp[2000];

class Solution {
public:
    int minCostClimbingStairs(int arr[], int n) {
        memset(dp,-1,sizeof(dp));
        return min(solve(arr,0,n),solve(arr,1,n));
    }

    int solve(int arr[], int pos, int n)
    {
        if(pos>=n){return 0;}
        if(dp[pos]!=-1){return dp[pos];}
        int temp=arr[pos]+solve(arr, pos+1, n);
        int temp1=arr[pos]+solve(arr, pos+2, n);
        dp[pos]=min(temp,temp1);
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
    cout<<m.minCostClimbingStairs(arr,n)<<endl;
}


//LEETCODE VERSION
//int dp[2000];
//
//class Solution {
//public:
//    int minCostClimbingStairs(vector<int>& cost) {
//        int n=cost.size();
//        memset(dp,-1,sizeof(dp));
//        return min(solve(cost,0,n),solve(cost,1,n));
//    }
//
//    int solve(vector<int>& cost, int pos, int n)
//    {
//        if(pos>=n){return 0;}
//        if(dp[pos]!=-1){return dp[pos];}
//        int temp=cost[pos]+solve(cost, pos+1, n);
//        int temp1=cost[pos]+solve(cost, pos+2, n);
//        dp[pos]=min(temp,temp1);
//        return dp[pos];
//    }
//};
