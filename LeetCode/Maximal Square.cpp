#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

int dp[350][350];
int row,col;

char arr[350][340];

//LEETCODE VERSION
//class Solution {
//public:
//    int maximalSquare(vector<vector<char>>& matrix) {
//        memset(dp,-1,sizeof(dp));
//        row=matrix.size();
//        col=matrix[0].size();
//        for(int i=0;i<row;i++)
//        {
//            for(int j=0;j<col;j++)
//            {
//                arr[i][j]=matrix[i][j];
//            }
//        }
//        solve(0,0);
//        int mx=INT_MIN;
//        for(int i=0;i<row;i++)
//        {
//            for(int j=0;j<col;j++)
//            {
//                mx=max(mx,dp[i][j]);
//            }
//        }
//
//        return  mx*mx;
//    }
//
//    int solve(int row_pos, int col_pos)
//    {
//        if(row_pos>=row || col_pos>=col){return 0;}
//        if(dp[row_pos][col_pos]!=-1){return dp[row_pos][col_pos];}
//
//        int bottom=solve(row_pos+1,col_pos);
//        int diag=solve(row_pos+1,col_pos+1);
//        int right=solve(row_pos,col_pos+1);
//
//        dp[row_pos][col_pos]=0;
//        if(arr[row_pos][col_pos]=='1'){dp[row_pos][col_pos]=1+min(bottom,min(right,diag));}
//
//        return dp[row_pos][col_pos];
//    }
//};


class Solution1 {
public:
    int maximalSquare1(int n, int m) {
        memset(dp,-1,sizeof(dp));
        row=n;
        col=m;
        solve1(0,0);
        int mx=INT_MIN;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                mx=max(mx,dp[i][j]);
            }
        }

        return  mx*mx;
    }

    int solve1(int row_pos, int col_pos)
    {
        if(row_pos>=row || col_pos>=col){return 0;}
        if(dp[row_pos][col_pos]!=-1){return dp[row_pos][col_pos];}

        int bottom=solve1(row_pos+1,col_pos);
        int diag=solve1(row_pos+1,col_pos+1);
        int right=solve1(row_pos,col_pos+1);

        dp[row_pos][col_pos]=0;
        if(arr[row_pos][col_pos]=='1'){dp[row_pos][col_pos]=1+min(bottom,min(right,diag));}

        return dp[row_pos][col_pos];
    }
};

int main()
{
    int n,m;
    char a;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    //Solution s;
    //cout<<s.maximalSquare(matrix)<<endl;
    Solution1 s;
    cout<<s.maximalSquare1(n,m)<<endl<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
}
