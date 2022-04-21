#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
using namespace std;

bool cmp(pair<ll,ll> a, pair<ll,ll> b)
{
    if(a.second==b.second)
    {
        return a.first>b.first;
    }
    else
    {
        return a.second<b.second;
    }
}

int main()
{
    fastio;
    ll s,e,i,n,t,cnt;
    cin>>t;
    while(t--)
    {
        cnt=0;
        vector<pair<int,int>> v;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>s>>e;
            v.push_back({s,e});
        }
        sort(v.begin(),v.end(),cmp);
        ll flag=0;
        for(i=0; i<n; i++)
        {
            if(flag<=v[i].first)
            {
                cnt++;
                flag=v[i].second;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}


