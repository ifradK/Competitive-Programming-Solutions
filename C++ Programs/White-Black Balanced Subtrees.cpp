#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

#define WHITE 0
#define GRAY 1
#define BLACK 2

vector<ll> ad_list[5000];
pair<ll,ll> dp[5000];
ll colour[5000],root;
string str;

pair<ll,ll> dfs2(ll u, ll vertex)
{
    colour[u]=GRAY;
    for(ll i=0;i<ad_list[u].size();i++)
    {
        ll temp=ad_list[u][i];
        if(colour[temp]==WHITE)
        {
            pair<ll,ll> p = dfs2(temp,vertex);
            dp[u].first=dp[u].first+p.first;
            dp[u].second=dp[u].second+p.second;
        }
    }
    colour[u]=BLACK;
    if(str[u-1]=='W'){dp[u].first++;}
    else{dp[u].second++;}
    return dp[u];
}


void dfs(ll vertex)
{
    for(ll i=0;i<=vertex;i++){colour[i]=WHITE;}
    for(ll i=1;i<=vertex;i++)
    {
        if(colour[i]==WHITE){dfs2(i,vertex);}
    }
}


int main()
{
    fastio;
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n],cnt=0;
        a[0]=1;
        for(i=1;i<n;i++){cin>>a[i];}
        cin>>str;
        for(i=0;i<n;i++)
        {
            if(i+1!=a[i]){ad_list[a[i]].push_back(i+1);}
            else{root=i+1;}
        }
        dfs(n);
        for(i=1;i<=n;i++)
        {
            if(dp[i].first==dp[i].second){cnt++;}
        }
        cout<<cnt<<endl;
        for(i=0;i<=n;i++)
        {
            dp[i].first=0;
            dp[i].second=0;
            ad_list[i].clear();
        }
    }
    return 0;
}
