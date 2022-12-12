#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

map<pair<int,int>,int> dp;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        dp.clear();
        return solve(prices,prices.size(),0,0);
    }

    int solve(vector<int>& prices, int n, int pos, int isbought)
    {
        if(pos>=n){return 0;}
        if(dp.find({pos,isbought})!=dp.end()){return dp[{pos,isbought}];}

        if(isbought==true){dp[{pos,isbought}]= max(prices[pos]+solve(prices,n,pos+1,0), solve(prices,n,pos+1,1));}
        else{dp[{pos,isbought}]= max(-prices[pos]+solve(prices,n,pos+1,1), solve(prices,n,pos+1,0));}
        return dp[{pos,isbought}];
    }
};


int main()
{
    int n,a;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++){cin>>a; v.push_back(a);}
    Solution s;
    cout<<s.maxProfit(v)<<endl;
}
