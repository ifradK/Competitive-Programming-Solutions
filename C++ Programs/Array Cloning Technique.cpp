#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;

ll func(ll val, ll n)
{
    ll cnt=0;
    while(1)
    {
        if(val<n)
        {
            val=val*2;
        }
        else
        {
            break;
        }
        cnt++;
    }
    return cnt;
}

int main()
{
    fastio;
    ll t,i,n,temp;
    cin>>t;
    while(t--)
    {
        cin>>n;

        map<ll,ll> mp,mp1;
        for(i=0; i<n; i++)
        {
            cin>>temp;
            mp[temp]++;
        }
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            mp1[it->second]=it->first;
        }
        auto it=mp1.end();
        it--;
        ll cnt=func(it->first,n);
        cout<<cnt+(n-it->first)<<endl;
    }
    return 0;
}

