#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

int dp[25][10010];

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        for(int i=0;i<=amount;i++){dp[0][i]=INT_MAX-1;}
        for(int i=0; i<=amount; i++)
        {
            if(i%coins[0]==1){dp[1][i]=1;}
            else{dp[1][i]=INT_MAX-1;}
        }
        for(int i=0;i<=coins.size();i++){dp[i][0]=0;}
        solve(coins,amount);
        if(dp[coins.size()][amount]==INT_MAX-1){return -1;}
        else{return dp[coins.size()][amount];}
    }

    void solve(vector<int>& coins, int amount)
    {
        for(int i=1;i<=coins.size();i++)
        {
            for(int j=1;j<=amount;j++)
            {
                if(coins[i-1]<=j){dp[i][j] = min(1+dp[i][j-coins[i-1]], dp[i-1][j]);}
                else{dp[i][j] = dp[i-1][j];}
            }
        }
    }
};


int main()
{
    int n,a,target;
    cin>>n>>target;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    Solution s;
//    cout<<s.coinChange(v,target)<<endl;
//    for(int i=0;i<=v.size();i++)
//    {
//        for(int j=0;j<=target;j++)
//        {
//            cout<<dp[i][j]<<" ";
//        }
//        cout<<endl;
//    }
}


/*
9 1
0 0 0 0 0 0 0 0 1
*/


