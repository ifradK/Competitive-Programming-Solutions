#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

int dp[205][205];
int arr[205][205];

class Solution {
public:
    //(LEETCODE VERSION)
//    int minPathSum(vector<vector<int>>& grid) {
//        int m=grid.size();
//        int n=grid[0].size();
//        for(int i=0;i<m;i++)
//        {
//            for(int j=0;j<n;j++)
//            {
//                arr[i][j]=grid[i][j];
//            }
//        }
//        memset(dp,-1,sizeof(dp));
//        return solve(0,0,m,n);
//    }

    int minPathSum(int i, int j, int m, int n) {
        memset(dp,-1,sizeof(dp));
        return solve(0,0,m,n);
    }

    int solve(int i, int j, int m, int n)
    {
        if(m==1 && n==1){return arr[0][0];}
        if(i==m-1 && j==n-1){return arr[i][j];}
        if(i>m-1 || j>n-1){return 20010;}
        if(dp[i][j]!=-1){return dp[i][j];}

        int temp1=arr[i][j]+solve(i+1,j,m,n);
        int temp2=arr[i][j]+solve(i,j+1,m,n);

        int mn=min(temp1,temp2);
        dp[i][j]=mn;
        return dp[i][j];
    }
};


int main()
{
    int n,m;
    cin>>m>>n;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }

    Solution s;
    cout<<s.minPathSum(0,0,m,n)<<endl;
//    for(int i=0;i<m;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            cout<<dp[i][j]<<" ";
//        }
//        cout<<endl;
//    }
}

