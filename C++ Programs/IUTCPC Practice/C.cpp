#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

#define WHITE 0
#define GRAY 1
#define BLACK 2

long long a[100005];
long long colour[100005], cnt=0;
vector<long long> v[100005];
long long mn;

void dfs2(int u, int vertex)
{
    if(a[u]<mn)
    {
        mn=a[u];
    }
    colour[u]=GRAY;
    for(int i=0; i<v[u].size(); i++)
    {
        int v1=v[u][i];
        if(colour[v1]==WHITE)
        {
            dfs2(v1,vertex);
        }
    }
    colour[u]=BLACK;
}

void dfs(int vertex)
{
    for(int i=1; i<=vertex; i++)
    {
        colour[i]=WHITE;
    }

    for(int i=1; i<=vertex; i++)
    {
        mn=LONG_MAX;
        if(colour[i]==WHITE)
        {
            dfs2(i,vertex);
            cnt=cnt+mn;
        }
    }
}


int main()
{
    fastio;
    long long n,k,i,x,y;
    cin>>n>>k;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    while(k--)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(n);
    cout<<cnt;
    return 0;
}
