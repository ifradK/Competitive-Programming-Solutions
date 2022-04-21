#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n],sum[n],mn=1e12;
        map<ll,ll> mp;
        vector<ll> v,v1;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            v.push_back(it->second);
        }
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            if(i==0)
            {
                sum[0]=v[0];
            }
            else if(i>0)
            {
                sum[i]=sum[i-1]+v[i];
            }
        }
        v1.push_back(0);
        for(i=1;i<v.size();i++)
        {
            if(v[i]!=v[i-1])
            {
                v1.push_back(i);
            }
        }
        for(i=0;i<v1.size();i++)
        {
            ll temp=(sum[v.size()-1]-sum[v1[i]])-(((v.size()-1)-v1[i])*v[v1[i]]);
            if(v1[i]>0)
            {
                temp=temp+sum[v1[i]-1];
            }
            mn=min(mn,temp);
        }
        cout<<mn<<endl;
        v.clear();
        v1.clear();
        mp.clear();
    }
    return 0;
}
