#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define INF 1000000000

int matrix[510][510];
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

node itemList[510];
priority_queue<node> queueVertex;

void setAll(int startingNode)
{
    for(int i=0; i<vertex; i++)
    {
        itemList[i].currentNode=i;
        itemList[i].costMin=INF;
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
            for(int i=0; i<vertex; i++)
            {
                if(matrix[current.currentNode][i]!=0)
                {
                    if(max(current.costMin,matrix[current.currentNode][i]) < itemList[i].costMin)
                    {
                        itemList[i].costMin=max(current.costMin,matrix[current.currentNode][i]);
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
    int T,n,m,u,v,w,t,i,j,cs=1;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&n,&m);
        memset(matrix,0,sizeof(matrix));
        for(i=0; i<m; i++)
        {
            scanf("%d%d%d",&u,&v,&w);
            if(matrix[u][v]!=0)
            {
                matrix[u][v]=min(matrix[u][v],w);
                matrix[v][u]=min(matrix[v][u],w);
            }
            else
            {
                matrix[u][v]=w;
                matrix[v][u]=w;
            }
        }
        scanf("%d",&t);
        vertex=n;
        dijkstra(t);
        printf("Case %d:\n",cs++);
        for(i=0; i<n; i++)
        {
            if(itemList[i].notVisited==false)
            {
                printf("%d\n",itemList[i].costMin);
            }
            else
            {
                printf("Impossible\n");
            }
        }
    }
    return 0;
}
