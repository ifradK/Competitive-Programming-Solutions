#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define endl '\n'
using namespace std;

vector<long long> v[50],teams[50];

#define WHITE 0
#define GRAY 1
#define BLACK 2

int colour[50],team_no=1;

void dfs2(int u, int vertex)
{
    colour[u]=GRAY;
    for(int i=0; i<v[u].size(); i++)
    {
        int v1=v[u][i];
        if(colour[v1]==WHITE)
        {
            teams[team_no].push_back(v1);
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
        if(colour[i]==WHITE)
        {
            teams[team_no].push_back(i);
            dfs2(i,vertex);
            team_no++;
        }
    }
}


int main()
{
    fastio;
    long long i,j,n,m,a,b,cnt,temp=0,temp1;
    stack<long long> st;
    bool flag=false;
    cin>>n>>m;
    while(m--)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(n);
    for(i=1; i<=n/3; i++)
    {
        if(teams[i].size()>3)
        {
            flag=true;
            break;
        }
    }
    if(flag==false)
    {
        for(i=1; i<=n; i++)
        {
            if(teams[i].size()==1)
            {
                st.push(teams[i][0]);
                teams[i].clear();
            }
            else if(teams[i].size()==2)
            {
                temp++;
            }
        }
        temp1=st.size()-temp;
        if(temp1<0 || temp1%3!=0)
        {
            cout<<-1;
            return 0;
        }

        for(i=1; i<=n/3; i++)
        {
            if(n>155)
            {
                break;
            }
            cnt=3;
            if(teams[i].size()>0)
            {
                for(j=0; j<teams[i].size(); j++)
                {
                    cout<<teams[i][j]<<" ";
                    cnt--;
                }
                for(j=0; j<cnt; j++)
                {
                    cout<<st.top()<<" ";
                    st.pop();
                }
                cout<<endl;
            }
            else
            {
                n=n+3;
            }
        }
        while(!st.empty())
        {
            cout<<st.top()<<" ";
            st.pop();
            cout<<st.top()<<" ";
            st.pop();
            cout<<st.top()<<" ";
            st.pop();
        }
    }
    else
    {
        cout<<-1;
    }
    return 0;
}
