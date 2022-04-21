#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

struct node
{
    int pos;
    int cost;
};

bool operator<(node a,node b)
{
    return a.cost<b.cost;
}

int main()
{
    fastio;
    int n,r,cs=0,i;
    while(1)
    {
        cs++;
        cin>>n>>r;
        if(n==0 && r==0)
        {
            break;
        }
        int cnt=0,mn=INT_MAX;
        map<string,int> mp;
        string start,end1;
        int matrix[n][n]= {0};
        memset(matrix,0,sizeof(matrix));
        for(int i=0; i<r; i++)
        {
            string source,destination;
            int weight;
            cin>>source>>destination>>weight;
            if(mp.find(source)==mp.end())
            {
                mp[source]=cnt;
                cnt++;
            }
            if(mp.find(destination)==mp.end())
            {
                mp[destination]=cnt;
                cnt++;
            }
            matrix[mp[source]][mp[destination]]=weight;
            matrix[mp[destination]][mp[source]]=weight;
        }
        cin>>start>>end1;


        priority_queue<node> pq;
        int cost[n];
        bool taken[n];

        //int prim(int source)

        for(int i=0; i<n; i++)
        {
            cost[i]=INT_MAX;
            taken[i]=false;
        }
        cost[mp[start]]=0;
        node temp;
        temp.pos=mp[start];
        temp.cost=0;
        pq.push(temp);
        int ans=0;
        while(!pq.empty())
        {
            node current=pq.top();
            pq.pop();
            if(taken[current.pos]==true)
            {
                //already visited
                continue;
            }
            cout<<"CURRENT COST "<< current.cost<<" "<<current.pos<<endl;
            if(current.cost<mn && current.cost!=0)
            {
                mn=current.cost;
            }
            if(current.pos==mp[end1])
            {
                break;
            }
            taken[current.pos]=true;


            for(i=0; i<n; i++)
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

        cout<<"Scenario #"<<cs<<endl;
        cout<<mn<<" tons"<<endl;
        cout<<endl;

        mp.clear();
        while(!pq.empty())
        {
            pq.pop();
        }
    }
    return 0;
}
