#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

vector<int> v;
int dp[10005][10005];

class Solution {
public:
    int numSquares(int n) {
        v.clear();
        int temp=1;
        while(temp*temp<=n){v.push_back(temp*temp);temp++;}
        for(int i=0;i<v.size();i++){dp[i][0]=0;}
        for(int i=0;i<=n;i++){dp[0][i]=INT_MAX-1;}
        for(int i=1;i<=n;i++){dp[1][i]=i;}
        return solve(n);
    }

    int solve(int n)
    {
        for(int i=2;i<=v.size();i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(v[i-1]<=j){dp[i][j]=min(1+dp[i][j-v[i-1]], dp[i-1][j]);}
                else{dp[i][j] = dp[i-1][j];}
            }
        }
        return dp[v.size()][n];
    }
};

int main()
{
    int n;
    cin>>n;
    Solution s;
    cout<<s.numSquares(n)<<endl;
//    for(int i=0;i<v.size();i++){cout<<v[i]<<" ";}
//    cout<<endl;
//    for(int i=0;i<=v.size();i++)
//    {
//        for(int j=0;j<=n;j++)
//        {
//            cout<<dp[i][j]<< " ";
//        }
//        cout<<endl;
//    }
}


