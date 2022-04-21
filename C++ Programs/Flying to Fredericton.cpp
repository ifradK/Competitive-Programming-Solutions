#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;

vector<pair<int,int>> v[110];
int dp[110][1010];

struct node
{
    int current_stage;
    int current_cost;
    int node_number;

    bool operator< (const node& temp) const
    {
        return current_cost > temp.current_cost;
    }
};

priority_queue<node> pq;

int solve(int start, int End, int num)
{
    memset(dp,63,sizeof(dp));
    node city1,city2;
    city1.node_number=start;
    city1.current_cost=0;
    city1.current_stage=0;

    pq.push(city1);

    while(!pq.empty())
    {
        city1=pq.top();
        pq.pop();
        if(city1.current_stage>num+1)
        {
            continue;
        }
        if(city1.node_number==End)
        {
            return city1.current_cost;
        }
        for(int i=0;i<v[city1.node_number].size();i++)
        {
            city2.node_number=v[city1.node_number][i].first;
            city2.current_cost=city1.current_cost+v[city1.node_number][i].second;
            city2.current_stage=city1.current_stage+1;

            if(dp[city2.node_number][city2.current_stage] > city2.current_cost)
            {
                dp[city2.node_number][city2.current_stage]=city2.current_cost;
                pq.push(city2);
            }
        }
    }
    return -1;
}


int main()
{
    fastio;
    int t,n,m,i,j,cost,start,End,q,num,sc=1;
    string str,str2;
    cin>>t;
    while(t--)
    {
        map<string,int> mp;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>str;
            mp[str]=i;
            if(str=="Calgary")
            {
                start=i;
            }
            else if(str=="Fredericton")
            {
                End=i;
            }
        }
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>str>>str2>>cost;
            v[mp[str]].push_back(make_pair(mp[str2],cost));
        }
        cin>>q;
        cout<<"Scenario #"<<sc++<<endl;
        while(q--)
        {
            cin>>num;
            int ans=solve(start, End, num);
            if(ans!=-1)
            {
                cout<<"Total cost of flight(s) is $"<<ans<<endl;
            }
            else
            {
                cout<<"No satisfactory flights"<<endl;
            }
        }
        if(t)
        {
            cout<<endl;
        }
        for(i=0;i<=n;i++)
        {
            v[i].clear();
        }
        while(!pq.empty())
        {
            pq.pop();
        }
    }
    return 0;
}
