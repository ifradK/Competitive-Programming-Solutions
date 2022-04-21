#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
using namespace std;
#define p pair<long long, long long>


stack<long long> st;
vector<p> v[100003];
priority_queue < p,vector <p>,greater<p> > q;
long long cost[100003], parent[100003];


bool dijkstra(long long start, long long End)
{
    pair<long long,long long> current;
    long long node_no,n2,w,i;
    for(i=0; i<100003; i++)
    {
        cost[i]=99999999999;
    }
    parent[1]=1;
    cost[start]=0;
    q.push(make_pair(0,start));

    while(!q.empty())
    {
        current=q.top();
        node_no=current.second;
        q.pop();

        if(node_no==End)
        {
            return true;
        }
        for(i=0; i<v[node_no].size(); i++)
        {
            n2=v[node_no][i].first;
            w=v[node_no][i].second;

            if(cost[node_no]+w<cost[n2])
            {
                cost[n2]=cost[node_no]+w;
                parent[n2]=node_no;
                q.push(make_pair(cost[n2],n2));
            }
        }
    }
    return false;
}

void find_parent(int i,int n)
{
    int par=n;
    while(1)
    {
        if(par==i)
        {
            return;
        }
        else
        {
            st.push(parent[n]);
            par=parent[n];
            n=par;
        }
    }
}

int main()
{
    fastio;
    long long n,m,a,b,w,i;
    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        cin>>a>>b>>w;
        v[a].push_back(make_pair(b,w));
        v[b].push_back(make_pair(a,w));
    }

    if(dijkstra(1,n))
    {
        find_parent(1,n);
        while(!st.empty())
        {
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<n;
    }
    else
    {
        cout<<-1;
    }
    return 0;
}

