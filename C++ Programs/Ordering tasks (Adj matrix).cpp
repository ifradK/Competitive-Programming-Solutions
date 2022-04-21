#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define WHITE 0
#define GRAY 1
#define BLACK 2
using namespace std;

int matrix[200][200];
int colour[200];
stack<int> st;

void dfs2(int u, int vertex)
{
    colour[u]=GRAY;
    for(int i=1; i<=vertex; i++)
    {
        if(matrix[u][i]==1)
        {
            int v=i;
            if(colour[v]==WHITE)
            {
                dfs2(v,vertex);
            }
        }
    }
    colour[u]=BLACK;
    st.push(u);
}

void dfs(int vertex)
{
    for(int i=1; i<=vertex; i++)
    {
        colour[i]=WHITE;
    }
    for(int i=1; i<=vertex; i++)
    {
        if(colour[i]==WHITE)
        {
            dfs2(i,vertex);
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
        memset(matrix,0,sizeof(matrix));
        for(i=0; i<m; i++)
        {
            cin>>x>>y;
            matrix[x][y]=1;
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

