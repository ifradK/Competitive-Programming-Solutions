#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

vector<int> adj[200];
bool colour[200];
stack<int> st;

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

int main()
{
    fastio;
    int n,m,i,x,y;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
        {
            break;
        }
        memset(colour,0,sizeof(colour));
        while(!st.empty())
        {
            st.pop();
        }
        for(i=0; i<=n; i++)
        {
            adj[i].clear();
        }
        for(i=0; i<m; i++)
        {
            cin>>x>>y;
            adj[x].push_back(y);
        }
        dfs(n);
        for(i=0;i<n-1;i++)
        {
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<st.top()<<endl;
        while(!st.empty())
        {
            st.pop();
        }
    }
    return 0;
}


