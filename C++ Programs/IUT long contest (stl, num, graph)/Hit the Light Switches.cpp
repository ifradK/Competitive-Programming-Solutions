#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

vector<int> adj[10005],v;
bool colour[10005];
stack<int> st;
int cnt=0;

void dfs2(int u)
{
    colour[u]=true;
    for(int i=0; i<adj[u].size(); i++)
    {
        int v=adj[u][i];
        if(!colour[v])
        {
            dfs2(v);
        }
    }
    st.push(u);
}

void dfs(int vertex)
{
    for(int i=1; i<=vertex; i++)
    {
        if(!colour[i])
        {
            dfs2(i);
        }
    }
}

int dfs3(int vertex)
{
    for(int i=0; i<v.size(); i++)
    {
        if(!colour[v[i]])
        {
            dfs2(v[i]);
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    fastio;
    int t,n,m,x,y,i,cs=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cnt=0;
        memset(colour,0,sizeof(colour));
        while(!st.empty())
        {
            st.pop();
        }
        for(i=0; i<=n; i++)
        {
            adj[i].clear();
        }
        v.clear();
        for(i=0; i<m; i++)
        {
            cin>>x>>y;
            adj[x].push_back(y);
        }
        dfs(n);
        while(!st.empty())
        {
            v.push_back(st.top());
            st.pop();
        }
        memset(colour,0,sizeof(colour));
        cout<<"Case "<<cs++<<": "<<dfs3(n)<<endl;
    }
    return 0;
}
