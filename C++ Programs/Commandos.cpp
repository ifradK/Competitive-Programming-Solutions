#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

int matrix[110][110];
int vertex,edge;

struct node
{
    int currentNode;
    bool notVisited;
    int costMin;
    bool operator< (const node& temp) const
    {
        return costMin > temp.costMin;
    }
};

node itemList[110];
priority_queue<node> queueVertex;

void setAll(int startingNode)
{
    for(int i=0;i<vertex;i++)
    {
        itemList[i].currentNode=i;
        itemList[i].costMin=INT_MAX;
        itemList[i].notVisited=true;
    }
    itemList[startingNode].costMin=0;
    itemList[startingNode].notVisited=true;
}


void dijkstra(int startingNode)
{
    setAll(startingNode);
    queueVertex.push(itemList[startingNode]);
    while(!queueVertex.empty())
    {
        node current=queueVertex.top();
        queueVertex.pop();

        if(current.notVisited==true)
        {
            for(int i=0;i<vertex;i++)
            {
                if(matrix[current.currentNode][i]!=0)
                {
                    if(itemList[i].costMin>current.costMin+matrix[current.currentNode][i])
                    {
                        itemList[i].costMin=current.costMin+matrix[current.currentNode][i];
                        queueVertex.push(itemList[i]);
                    }
                }
            }
        }
        itemList[current.currentNode].notVisited=false;
    }
}

int main()
{
    fastio;
    int t,i,cs=1,u,v,start_node,end_node;
    cin>>t;
    while(t--)
    {
        cin>>vertex>>edge;
        int time1[vertex]={0};
        int time2[vertex]={0};
        memset(matrix,0,sizeof(matrix));
        for(i=0;i<edge;i++)
        {
            cin>>u>>v;
            matrix[u][v]=1;
            matrix[v][u]=1;
        }
        cin>>start_node>>end_node;
        dijkstra(start_node);
        for(i=0;i<vertex;i++)
        {
            time1[i]=itemList[i].costMin;
        }
        dijkstra(end_node);
        for(i=0;i<vertex;i++)
        {
            time2[i]=itemList[i].costMin;
        }
        int mx=INT_MIN;
        for(i=0;i<vertex;i++)
        {
            mx=max(mx,time1[i]+time2[i]);
        }
        cout<<"Case "<<cs++<<": "<<mx<<endl;
    }
    return 0;
}
