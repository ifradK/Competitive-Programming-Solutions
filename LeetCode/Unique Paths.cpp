#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

int dp[105][105];

class Solution {
public:
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
        return solve(0,0,m,n);
    }

    int solve(int i, int j, int m, int n)
    {
        if(m==1 && n==1){return 1;}
        if(i==m-1 && j==n-1){return 0;}
        if((i==m-1 && j==n-2) || (i==m-2 && j==n-1)){return 1;}
        if(i>m-1 || j>n-1){return 0;}
        if(dp[i][j]!=-1){return dp[i][j];}

        dp[i][j]=solve(i+1,j,m,n)+solve(i,j+1,m,n);
        return dp[i][j];
    }
};


int main()
{
    int n,m;
    cin>>m>>n;
    Solution s;
    cout<<s.uniquePaths(m,n)<<endl;
}

