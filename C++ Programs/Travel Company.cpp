#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
#define inf 999999999

long long dis[10000];
bool flag=false;

struct edge1
{
    long long source;
    long long destination;
    long long weight;
} e[10000];

bool bellman_ford(long long vertex,long long edge,edge1 e[])
{
    long long u,v,wt,i,j;

    for(i=0; i<=vertex; i++)
    {
        dis[i]=inf;
    }

    dis[0]=0;
    for(i=0; i<vertex-1; i++)
    {
        for(j=0; j<edge; j++)
        {
            u=e[j].source;
            v=e[j].destination;
            wt=e[j].weight;

            if(dis[u]+wt < dis[v])
            {
                dis[v]=dis[u]+wt;
            }
        }
    }

    for(j=0; j<edge; j++)
    {
        u=e[j].source;
        v=e[j].destination;
        wt=e[j].weight;
        if(dis[u]+wt < dis[v])
        {
            flag=true;
        }
    }
    if(flag==true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    fastio;
    long long t,n,r,p,a,b,i,cs=1,income,expense;
    cin>>t;
    while(t--)
    {
        cin>>n>>r>>p;
        for(i=0;i<r;i++)
        {
            cin>>e[i].source>>e[i].destination>>income>>expense;
            e[i].weight=(expense*p)-income;
        }
        flag=false;
        if(bellman_ford(n,r,e)==true)
        {
            cout<<"Case "<<cs++<<": YES";
        }
        else
        {
            cout<<"Case "<<cs++<<": NO";
        }
        cout<<endl;
    }
    return 0;
}
