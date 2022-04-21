#include<iostream>
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
int main()
{
    fastio;
    ll t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ll temp=ceil((float)k/2);
        vector<ll> v;
        for(ll i=temp;i<=k-1;i++)
        {
            v.push_back(i);
        }
        for(ll i=k+1;i<=n;i++)
        {
            v.push_back(i);
        }
        cout<<v.size()<<endl;
        for(ll i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        v.clear();
    }
    return 0;
}
