#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

struct coordinates
{
    double xpos;
    double ypos;
};

struct node
{
    int pos;
    double cost;
};

bool operator<(node a,node b)
{
    return a.cost>b.cost;
}

int main()
{
    fastio;
    string blankline;
    int t,i,j,k;
    cin>>t;
    for(k=0;k<t;k++)
    {
        coordinates dist;
        map<int,coordinates> mp;
        int vertex,idx=0;
        double x,y;
        cin>>vertex;
        double matrix[vertex][vertex]={0};
        memset(matrix,0,sizeof(matrix));
        for(i=0;i<vertex;i++)
        {
            cin>>x>>y;
            dist.xpos=x;
            dist.ypos=y;
            mp[idx]=dist;
            idx++;
        }
        for(i=0;i<vertex;i++)
        {
            for(j=0;j<vertex;j++)
            {
                matrix[i][j]=sqrt(((mp[i].xpos-mp[j].xpos)*(mp[i].xpos-mp[j].xpos))+((mp[i].ypos-mp[j].ypos)*(mp[i].ypos-mp[j].ypos)));
            }
        }


        //int prim(int source)

        priority_queue<node> pq;
        double cost[vertex];
        bool taken[vertex];

        for(i=0; i<vertex; i++)
        {
            cost[i]=INT_MAX;
            taken[i]=false;
        }

        cost[0]=0;
        node temp;
        temp.pos=0;
        temp.cost=0;
        pq.push(temp);
        double ans=0;
        while(!pq.empty())
        {
            node current=pq.top();
            pq.pop();
            if(taken[current.pos]==true)
            {
                //already visited
                continue;
            }
            taken[current.pos]=true;
            ans=ans+current.cost;

            for(i=0; i<vertex; i++)
            {
                if(matrix[current.pos][i]>0)
                {
                    if(taken[i]==true)
                    {
                        continue;
                    }
                    if(matrix[current.pos][i]<cost[i])
                    {
                        node temp2;
                        temp2.pos=i;
                        temp2.cost=matrix[current.pos][i];
                        pq.push(temp2);
                        cost[i]=matrix[current.pos][i];
                    }
                }
            }
        }
        cout<<fixed<<setprecision(2)<<ans<<endl;
        if(k!=t-1)
        {
            cout<<endl;
        }
    }
    return 0;
}
