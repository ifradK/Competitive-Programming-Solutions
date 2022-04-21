#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
#define INT_MAX 2147483647

struct edge1
{
    int source;
    int destination;
    int weight;
} e[3010];

int main()
{
    fastio;
    int n,m,i,j,cs;
    cin>>cs;
    while(cs--)
    {
        cin>>n>>m;
        for(i=0; i<m; i++)
        {
            cin>>e[i].source>>e[i].destination>>e[i].weight;
        }

        int dis[3010];

        //cout<<"case "<<cs<<" ";
        int vertex=n,edge=m;
        int u,v,wt;

        for(i=0; i<=vertex; i++)
        {
            dis[i]=INT_MAX;
        }
        dis[0]=0;

        for(i=0; i<vertex-1; i++)
        {
            for(j=0; j<edge; j++)
            {
                u=e[j].source;
                v=e[j].destination;
                wt=e[j].weight;

                //if(dis[u]!=INT_MAX && dis[u]+wt < dis[v])
                if(dis[u]+wt < dis[v])
                {
                    dis[v]=dis[u]+wt;
                }
            }
        }

        /* checking if negative cycle is present */

        bool flag=false;

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
            cout<<"possible"<<endl;
        }
        else
        {
            cout<<"not possible"<<endl;
        }
    }
    return 0;
}
