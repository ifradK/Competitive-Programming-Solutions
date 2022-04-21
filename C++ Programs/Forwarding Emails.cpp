#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

vector<long> matrix[50010];
bool visited[50010];
long dp[50010];
long cnt=1,mx=-1,ans=-1;

void dfs2(long u)
{
    long v=matrix[u][0];
    visited[u]=true;
    if(visited[v]==false)
    {
        cnt++;
        dfs2(v);
    }
    visited[u]=false;
    dp[u]=cnt;
}

void dfs(long vertex)
{
    for(long i=1; i<=vertex; i++)
    {
        if(dp[i]==0)
        {
            dfs2(i);
            dp[i]=cnt;
        }
        if(mx<dp[i])
        {
            mx=dp[i];
            ans=i;
        }
        cnt=1;
    }
}

int main()
{
    fastio;
    long t,n,u,v,cs=1,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        memset(visited,false,sizeof(visited));
        memset(dp,0,sizeof(dp));
        for(i=0; i<n; i++)
        {
            cin>>u>>v;
            matrix[u].push_back(v);
        }
        mx=-1;
        cnt=1;
        dfs(n);
        cout<<"Case "<<cs++<<": "<<ans<<endl;
        for(i=0;i<=n;i++)
        {
            matrix[i].clear();
        }
    }
    return 0;
}

