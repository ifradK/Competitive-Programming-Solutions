#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

int dp[205][205];

class Solution {
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        memset(dp,-1,sizeof(dp));
        int mx=INT_MIN;
        for(int i=0; i<matrix.size(); i++){for(int j=0; j<matrix[0].size(); j++){solve(matrix,i,j,-1);}}
        for(int i=0; i<matrix.size(); i++){for(int j=0; j<matrix[0].size(); j++){mx = max(mx,dp[i][j]);}}

        return mx;
    }

    int solve(vector<vector<int>>& matrix, int x, int y, int previous)
    {
        if(x>=matrix.size() || y>=matrix[0].size() || x<0 || y<0){return 0;}
        if(previous<matrix[x][y])
        {
            if(dp[x][y]!=-1){return dp[x][y];}
            int temp1 = 1+solve(matrix,x+1,y,matrix[x][y]);
            int temp2 = 1+solve(matrix,x,y+1,matrix[x][y]);
            int temp3 = 1+solve(matrix,x-1,y,matrix[x][y]);
            int temp4 = 1+solve(matrix,x,y-1,matrix[x][y]);
            dp[x][y] = max(max(temp1,temp2),max(temp3,temp4));

            return dp[x][y];
        }
        else{return 0;}
    }
};


int main()
{
    int n,m,a;
    cin>>n>>m;
    vector<vector<int>> v(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a;
            v[i].push_back(a);
        }
    }
    Solution s;
    cout<<s.longestIncreasingPath(v)<<endl;
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<m;j++)
//        {
//            cout<<dp[i][j]<< " ";
//        }
//        cout<<endl;
//    }
}
