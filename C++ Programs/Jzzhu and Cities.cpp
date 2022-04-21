#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

vector<pair<int,int>> matrix[20010];
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

node itemList[20010];
priority_queue<node> queueVertex;

void setAll(int startingNode)
{
    for(int i=0; i<vertex; i++)
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
            for(int i=0; i<matrix[current.currentNode].size(); i++)
            {
                if(itemList[matrix[current.currentNode][i].first].costMin>current.costMin+matrix[current.currentNode][i].second)
                {
                    itemList[matrix[current.currentNode][i].first].costMin=current.costMin+matrix[current.currentNode][i].second;
                    queueVertex.push(itemList[matrix[current.currentNode][i].first]);
                }

            }
        }
        itemList[current.currentNode].notVisited=false;
    }
}

int main()
{
    fastio;
    int T,n,m,s,t,i,j,source,destination,weight,cs=1;
    cin>>T;
    while(T--)
    {
        cin>>n>>m>>s>>t;
        for(i=0; i<m; i++)
        {
            cin>>source>>destination>>weight;
            matrix[source].push_back(make_pair(destination,weight));
            matrix[destination].push_back(make_pair(source,weight));
        }
        vertex=n;
        dijkstra(s);
        if(itemList[t].notVisited==false)
        {
            cout<<"Case #"<<cs++<<": "<<itemList[t].costMin<<endl;
        }
        else
        {
            cout<<"Case #"<<cs++<<": unreachable"<<endl;
        }
        for(i=0;i<n;i++)
        {
            matrix[i].clear();
        }
    }
    return 0;
}
