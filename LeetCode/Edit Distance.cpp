#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

int dp[505][505];

class Solution {
public:
    int minDistance(string m, string n) {
        for(int i=0;i<=m.size();i++){dp[i][0]=i;}
        for(int i=0;i<=n.size();i++){dp[0][i]=i;}
        solve(m,n);
        return dp[m.size()][n.size()];
    }

    void solve(string m, string n)
    {
        for(int i=1;i<=m.size();i++)
        {
            for(int j=1;j<=n.size();j++)
            {
                if(m[i-1]==n[j-1]){dp[i][j]=dp[i-1][j-1];}
                else
                {
                    dp[i][j]=min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1])+1;
                }
            }
        }
    }
};


int main()
{
    string n,m;
    cin>>m>>n;
    Solution s;
    cout<<s.minDistance(m,n)<<endl;
}



