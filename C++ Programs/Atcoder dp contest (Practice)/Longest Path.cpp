#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

vector<long long> vec[100000+3];
long long cnt=0,mx=INT_MIN,ans=INT_MIN;
long long count1[100000+3];

long long dfs2(long long u, long long vertex)
{
    for(long long i=0; i<vec[u].size(); i++)
    {
        long long v=vec[u][i];
        if(count1[v]==-1)
        {
            count1[u]=max(1+dfs2(v,vertex), count1[u]);
        }
        else
        {
            count1[u]=max(1+count1[v], count1[u]);
        }
    }
    if(vec[u].size()==0)
    {
        count1[u]=0;
        return count1[u];
    }
    else
    {
        return count1[u];
    }
}

void dfs(long long vertex, long long n)
{
    cnt=0;
    mx=INT_MIN;
    if(count1[n]==-1)
    {
        mx=dfs2(n,vertex);
    }
    else
    {
        mx=count1[n];
    }
    if(mx>ans)
    {
        ans=mx;
    }
}

int main()
{
    fastio;
    long long vertex,edge,i,x,y;
    cin>>vertex>>edge;
    memset(count1,-1,sizeof(count1));
    for(i=0; i<edge; i++)
    {
        cin>>x>>y;
        vec[x].push_back(y);
    }
    for(i=1; i<=vertex; i++)
    {
        dfs(vertex,i);
    }
    cout<<ans;
    return 0;
}


