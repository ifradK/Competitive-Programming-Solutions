#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

struct node
{
    int start;
    int end;
    int weight;
};

bool operator<(node a,node b)
{
    return a.weight<b.weight;
}

int parent[1000];
int rankParent[1000];
int taken[1000];
int etl;
vector<node> edge_vec;

void initializeSet(int n)
{
    for(int i=0; i<n; i++)
    {
        parent[i]=i;
        rankParent[i]=0;
    }
}

int findParent(int x)
{
    if(x!=parent[x])
    {
        return parent[x]=findParent(parent[x]);
    }
    else
    {
        return x;
    }
}

void unionSet(int x,int y)
{
    int px=findParent(x);
    int py=findParent(y);
    if(px==py)
    {
        return;
    }

    if(rankParent[px]<rankParent[py])
    {
        parent[px]=py;
    }
    else if(rankParent[px]>rankParent[py])
    {
        parent[py]=px;
    }
    else
    {
        parent[py]=px;
        rankParent[px]++;
    }
}

int kruskal(int n)
{
    initializeSet(n);
    sort(edge_vec.begin(),edge_vec.end());

    int ans=-1;
    int sum=0;
    int cnt=0;
    etl=0;

    for(int i=0; i<edge_vec.size() && cnt<n-1; i++)
    {
        if(findParent(edge_vec[i].start)!=findParent(edge_vec[i].end))
        {
            unionSet(parent[edge_vec[i].start],parent[edge_vec[i].end]);
            sum=sum+edge_vec[i].weight;
            taken[etl++]=i;
            cnt++;
        }
    }
    if(cnt==n-1)
    {
        ans=sum;
    }
    return ans;
}

int main()
{
    fastio;
    int t,vertex,edge,start,End,weight,i,j,cs=0,mn,ans,cnt;
    cin>>t;
    while(t--)
    {
        cs++;
        cin>>vertex>>edge;
        edge_vec.clear();
        memset(taken,0,sizeof(taken));
        for(i=0; i<edge; i++)
        {
            node e;
            cin>>e.start>>e.end>>e.weight;
            edge_vec.push_back(e);
        }
        cout<<"Case #"<<cs<<" : ";
        ans=kruskal(vertex);
        if(ans==-1)
        {
            cout<<"No way"<<endl;
        }
        else
        {
            mn=INT_MAX;
            for(i=0; i<etl; i++)
            {
                initializeSet(vertex);
                cnt=0;
                ans=0;
                for(j=0; j<edge_vec.size() && cnt<vertex-1; j++)
                {
                    if(taken[i]!=j)
                    {
                        int x=findParent(edge_vec[j].start);
                        int y=findParent(edge_vec[j].end);
                        if(x!=y)
                        {
                            cnt++;
                            unionSet(x,y);
                            ans=ans+edge_vec[j].weight;
                        }
                    }
                }
                if(cnt==vertex-1 && mn>ans)
                {
                    mn=ans;
                }
            }
            if(mn==INT_MAX)
            {
                cout<<"No second way"<<endl;
            }
            else
            {
                cout<<mn<<endl;
            }
        }
    }
    return 0;
}

