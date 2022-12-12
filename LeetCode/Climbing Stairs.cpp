#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

int dp[50];

class Solution {
public:
    int climbStairs(int n) {
        solve(45);
        return dp[n];
    }

    void solve(int n)
    {
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
    }
};

int main()
{
    ll n;
    cin>>n;
    Solution m;
    cout<<m.climbStairs(n);
}
