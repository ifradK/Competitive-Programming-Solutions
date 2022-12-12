#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

#define WHITE 0
#define GRAY 1
#define BLACK 2

ll colour[200050],root;
vector<ll> ad_list[200050];
vector<ll> v;
bool flag=false;

void dfs2(ll u, ll vertex)
{
    v.push_back(u);
    colour[u]=GRAY;
    for(ll i=0;i<ad_list[u].size();i++)
    {
        ll temp=ad_list[u][i];
        if(colour[temp]==WHITE)
        {
            if(flag==true)
            {
                cout<<v.size()<<endl;
                for(ll j=0;j<v.size();j++){cout<<v[j]<<" ";}
                cout<<endl;
                v.clear();
                flag=false;
            }
            dfs2(temp,vertex);
        }
    }
    colour[u]=BLACK;
    flag=true;

}

void dfs(ll vertex)
{
    for(ll i=0;i<=vertex;i++)
    {
        colour[i]=WHITE;
    }
    dfs2(root,vertex);
    for(ll i=1;i<=vertex;i++)
    {
        if(colour[i]==WHITE)
        {
            dfs2(i,vertex);
        }
    }
    cout<<v.size()<<endl;
    for(ll i=0;i<v.size();i++){cout<<v[i]<<" ";}
    cout<<endl;
    v.clear();
}

int main()
{
    fastio;
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n],cnt=0;
        for(i=0;i<n;i++){cin>>a[i];}
        for(i=0;i<n;i++)
        {
            if(i+1!=a[i]){ad_list[a[i]].push_back(i+1);}
            else{root=i+1;}
        }
        for(i=1;i<=n;i++)
        {
            if(ad_list[i].size()==0){cnt++;}
        }
        cout<<cnt<<endl;
        dfs(n);
        cout<<endl;
        for(i=0;i<=n;i++){ad_list[i].clear();}
        flag=false;
    }
    return 0;
}
